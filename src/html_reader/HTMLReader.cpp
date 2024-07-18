#include <fstream>
#include <iostream>
#include <algorithm>
#include <string>
#include "HTMLReader.h"

HTMLReader::HTMLReader(const std::string& filePath): 
    filePath(filePath), 
    htmlParsed(false), 
    htmlContent("") 
{}

void HTMLReader::readHTMLFile() {
    std::ifstream file(this->filePath);

    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filePath << std::endl;
        return;
    }

    std::string line;
    while (getline(file, line)) {
        this->htmlContent.append(line);
    }

    file.close();
}

std::string& HTMLReader::getHTMLContent() {
    return this->htmlContent;
}

// Keeping this function for special-case processing in HTML files
void HTMLReader::replaceAll(std::string& inputStr, const std::string& toFind, const std::string& toReplace) {
    std::size_t pos = inputStr.find(toFind); 
    while (pos != std::string::npos) { 
        inputStr.replace(pos, toFind.size(), toReplace); 
        pos = inputStr.find(toFind, pos + toReplace.size()); 
    } 
}
#ifndef HTMLREADER_H
#define HTMLREADER_H

#include <fstream>
#include <iostream>
#include <string>

class HTMLReader {
    private:
        const std::string& filePath;
        std::string htmlContent;
        bool htmlParsed;
        void replaceAll(std::string& inputStr, const std::string& toFind, const std::string& toReplace);
    public:
        HTMLReader(const std::string& fileName);
        void readHTMLFile();
        std::string& getHTMLContent();
};

#endif // HTMLREADER_H
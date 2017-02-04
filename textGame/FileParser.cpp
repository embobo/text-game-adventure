//
//  FileParser.cpp
//  textGame
//
//  Created by Emma on 2/2/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "FileParser.hpp"

std::string FileParser::getFileContents(const std::string& filePath)
{
    std::ifstream fileStream( filePath.c_str() );
    std::string fileContent;
    if( !(fileStream >> fileContent))
        return std::string();
    if(filePath.substr( filePath.length() - 4 ) == "json") {
        
    }
    return fileContent;
}

std::list<std::string> FileParser::parseText(const std::string& inputUnparsed,
                          const char& delimitter)
{
    std::list<std::string> outputParsed;
    std::istringstream stringStream(inputUnparsed);
    std::string token;
    
    while(std::getline(stringStream,token,delimitter)) {
        // todo
        outputParsed.push_back(token);
    }
    return outputParsed;
}

std::list<std::string> FileParser::parseTextFromFile( const std::string& filePath,
                                  const char& delimitter)
{
    return parseText(getFileContents(filePath), delimitter);
}



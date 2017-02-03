//
//  FileParser.cpp
//  textGame
//
//  Created by Emma on 2/2/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "FileParser.hpp"

std::string FileParser::getFileContents(const std::string& _fileNamePath)
{
    std::ifstream fileStream( _fileNamePath.c_str() );
    std::string fileContent;
    if( !(fileStream >> fileContent))
        return std::string();
    return fileContent;
}

std::list<std::string> FileParser::parseText(const std::string& _input,
                          const char& _delimitter)
{
    std::list<std::string> output;
    std::istringstream stringStream(_input);
    std::string token;
    
    while(std::getline(stringStream,token,_delimitter)) {
        // todo
        output.push_back(token);
    }
    return output;
}

std::list<std::string> FileParser::parseTextFromFile( const std::string& _fileNamePath,
                                  const char& _delimitter)
{
    return parseText(getFileContents(_fileNamePath), _delimitter);
}



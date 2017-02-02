//
//  FileParser.cpp
//  textGame
//
//  Created by Emma on 2/2/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "FileParser.hpp"

int FileParser::getFileContents(const std::string& _fileNamePath,
                                std::string& _fileContent)
{
    std::ifstream fileStream( _fileNamePath.c_str() );

    if( !(fileStream >> _fileContent))
        return GameErrorCodes::FILE_ERR;
    return GameErrorCodes::NO_ERR;
}

int FileParser::parseText(const std::string& _input,
                          const char _delimitter,
                          std::list<std::string>* _output)
{
    std::istringstream stringStream(_input);
    std::string token;
    
    while(std::getline(stringStream,token,_delimitter)) {
        // todo
        _output->push_back(token);
    }
    return GameErrorCodes::NO_ERR;
}

int FileParser::parseTextFromFile( const std::string& _fileNamePath,
                                  const char _delimitter,
                                  std::list<std::string>* _output )
{
    std::string _fileContent;
    int err = getFileContents(_fileNamePath, _fileContent);
    // todo increase efficiency of this
    if( err != GameErrorCodes::NO_ERR )
        return err;

    return parseText(_fileContent, _delimitter, _output);
}



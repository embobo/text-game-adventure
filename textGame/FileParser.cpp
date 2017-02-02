//
//  FileParser.cpp
//  textGame
//
//  Created by Emma on 2/2/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "FileParser.hpp"

int FileParser::getFileContents(const std::string& _fileNamePath, std::string& _fileContent) {
    std::ifstream fileStream( _fileNamePath.c_str() );

    if( !(fileStream >> _fileContent))
        return GameErrorCodes::FILE_ERR;
    return GameErrorCodes::NO_ERR;
}

int FileParser::parseText(const std::string& _input, const char _delimitter, std::list<std::string>* _output) {
    std::istringstream stringStream(_input);
    std::string token;
    
    while(std::getline(stringStream,token,_delimitter)) {
        // todo
    }
    return GameErrorCodes::NO_ERR;
}

int FileParser::parseTextFromFile( const std::string& _fileNamePath, const std::string& _delimitter, std::list<std::string>* _output ) {
    // todo
    return GameErrorCodes::NO_ERR;
}

int FileParser::parseTextFromFile( const std::string& _fileNamePath, const std::string& _delimitter1, const std::string& _delimitter2, std::list<std::list<std::string>>* _output ) {
    
    // parse fileContent into comma, newline delimited vectors
    return GameErrorCodes::NO_ERR;
}

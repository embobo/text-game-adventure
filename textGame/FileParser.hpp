//
//  FileParser.hpp
//  textGame
//
//  Created by Emma on 2/2/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef FileParser_hpp
#define FileParser_hpp

#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <list>
#include "GameErrorCodes.hpp"

/** @class FileParser
 * @brief FileParser is used to retrieve and parse game files into usable string lists for the caller
 */

class FileParser {
private:
    static int getFileContents(const std::string& _fileNamePath, std::string& _fileContent);

public:
    /**
     * function which performs parsing
     * given a vector this will append each delimitted string
     */
    static int parseText(const std::string& _input, const char _delimitter, std::list<std::string>* _output);
    /**
     * parse text from file by one delimiter
     */
    static int parseTextFromFile( const std::string& _fileNamePath, const char _delimitter, std::list<std::string>* _output );

};

#endif /* FileParser_hpp */

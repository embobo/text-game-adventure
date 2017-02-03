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
    /**
     * @param _fileNamePath string pathname to file
     * @return string which file contents are written
     */
    static std::string getFileContents(const std::string& _fileNamePath);

public:
    /**
     * function which performs parsing
     * @param _input string to parse
     * @param _delimitter char to separate string
     * @return list of parsed strings
     */
    static std::list<std::string> parseText(const std::string& _input, const char& _delimitter);
    /**
     * parse text from file by one delimiter
     * @param _fileNamePath string pathname to file
     * @param _delimitter char to separate string
     * @return list of parsed strings
     */
    static std::list<std::string> parseTextFromFile( const std::string& _fileNamePath, const char& _delimitter );

};

#endif /* FileParser_hpp */

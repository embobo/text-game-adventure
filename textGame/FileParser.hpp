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

/** @class FileParser
 * @brief FileParser is used to retrieve and parse game files into usable string lists for the caller
 */

class FileParser {
private:
    /**
     * @param filePath string pathname to file
     * @return string which file contents are written
     */
    static std::string getFileContents(const std::string& filePath);

public:
    /**
     * function which performs parsing
     * @param inputUnparsed string to parse
     * @param delimitter char to separate string
     * @return list of parsed strings
     */
    static std::list<std::string> parseText(const std::string& inputUnparsed, const char& delimitter);
    /**
     * parse text from file by one delimiter
     * @param filePath string pathname to file
     * @param delimitter char to separate string
     * @return list of parsed strings
     */
    static std::list<std::string> parseTextFromFile( const std::string& filePath, const char& delimitter );

};

#endif /* FileParser_hpp */

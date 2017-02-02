//
//  GameErrorCodes.hpp
//  textGame
//
//  Created by Emma on 2/2/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameErrorCodes_hpp
#define GameErrorCodes_hpp

#include <stdio.h>

/** @class GameErrorCodes
 * @brief GameErrorCodes contains static int values to be used by the game to indicate various game specific errors
 */
class GameErrorCodes {
public:
    /** int indicating no error */
    static const int NO_ERR;
    /** int indicating file read */
    static const int FILE_ERR;
    /** int indicating memory allocation error */
    static const int MEMORY_ALLOCATION_ERR;
    /** int indicating string parse error */
    static const int PARSE_ERR;
};

#endif /* GameErrorCodes_hpp */

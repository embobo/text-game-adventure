//
//  GameItemSet.hpp
//  textGame
//
//  Created by Emma on 2/1/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameItemSet_hpp
#define GameItemSet_hpp

#include "GameItemType.hpp"

/** @class GameItemSet
 * @brief GameItemSet is the container for all types of game items
 - it should be used as a static reference to item functionality
 */

class GameItemSet {
private:
    static const GameItemType alarmClock;
    static const GameItemType refridgerator;
    static const GameItemType paper;
    static const GameItemType computer;
    static const GameItemType stick;
    static const GameItemType magnifyingGlass;
public:
    
};

#endif /* GameItemType_hpp */

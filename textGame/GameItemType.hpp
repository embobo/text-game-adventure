//
//  game-item.hpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef game_item_hpp
#define game_item_hpp

#include <stdio.h>
#include <map>
#include <fstream>
#include <sstream>
#include "TileType.hpp"

class GameItemType {
protected:
    std::string name;
    bool movable;
    bool consumable;
public:
    GameItemType();
    GameItemType(std::string item_name);
    GameItemType(std::string item_name, bool is_movable);
    GameItemType(std::string item_name, bool is_movable, bool is_consumable);
    std::string getName() const;
    bool isMovable() const;
    bool isConsumable() const;
};

#endif /* game_item_hpp */

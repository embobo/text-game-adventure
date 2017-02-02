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
#include <fstream>
#include <sstream>
#include "TileType.hpp"

class GameItemType {
protected:
    const std::string name;
    const std::string casualName;
    const bool movable;
    const bool consumable;
public:
    GameItemType();

    GameItemType(std::string _name);

    GameItemType(std::string _name,
                 std::string _casualName);

    GameItemType(std::string _name,
                 bool _movable);

    GameItemType(std::string _name,
                 std::string _casualName,
                 bool _movable);

    GameItemType(std::string _name,
                 bool _movable,
                 bool _consumable);

    GameItemType(std::string _name,
                 std::string _casualName,
                 bool _movable,
                 bool _consumable);

    std::string getName() const;
    std::string getCasualName() const;
    bool isMovable() const;
    bool isConsumable() const;
};

#endif /* game_item_hpp */

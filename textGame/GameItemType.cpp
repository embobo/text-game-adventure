//
//  game-item.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameItemType.hpp"

GameItemType::GameItemType(std::string item_name) : movable(false), consumable(false) {
    name = item_name;
}

GameItemType::GameItemType(std::string item_name, bool is_movable) : consumable(false) {
    name = item_name;
    movable = is_movable;
}

GameItemType::GameItemType(std::string item_name, bool is_movable, bool is_consumable) {
    name = item_name;
    movable = is_movable;
    consumable = is_consumable;
}

std::string GameItemType::getName() const {
    return name;
}
bool GameItemType::isMovable() const {
    return movable;
}
bool GameItemType::isConsumable() const {
    return consumable;
}



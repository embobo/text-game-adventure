//
//  game-item.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameItem.hpp"

GameItem::GameItem(std::string item_name) : movable(false), consumable(false) {
    name = item_name;
}

GameItem::GameItem(std::string item_name, bool is_movable) : consumable(false) {
    name = item_name;
    movable = is_movable;
}

GameItem::GameItem(std::string item_name, bool is_movable, bool is_consumable) {
    name = item_name;
    movable = is_movable;
    consumable = is_consumable;
}

std::string GameItem::getName() const {
    return name;
}
bool GameItem::isMovable() const {
    return movable;
}
bool GameItem::isConsumable() const {
    return consumable;
}



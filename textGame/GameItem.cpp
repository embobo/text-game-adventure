//
//  game-item.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameItem.hpp"

GameItem::GameItem(std::string item_name) : moveable(false), consumable(false) {
    name = item_name;
}

GameItem::GameItem(std::string item_name, bool is_moveable) : consumable(false) {
    name = item_name;
    moveable = is_moveable;
}

GameItem::GameItem(std::string item_name, bool is_moveable, bool is_consumable) {
    name = item_name;
    moveable = is_moveable;
    consumable = is_consumable;
}

std::string GameItem::getName() const {
    return name;
}
bool GameItem::isMoveable() const {
    return moveable;
}
bool GameItem::isConsumable() const {
    return consumable;
}



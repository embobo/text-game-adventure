//
//  game-item.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameItemType.hpp"

GameItemType::GameItemType()
    : name("nothing"),
    casualName("nothing"),
    movable(false),
    consumable(false) {}

GameItemType::GameItemType(std::string _name)
    : name(_name),
    casualName(_name),
    movable(false),
    consumable(false) {}

GameItemType::GameItemType(std::string _name, std::string _casualName)
    : name(_name),
    casualName(_casualName),
    movable(false),
    consumable(false) {}

GameItemType::GameItemType(std::string _name, bool _movable)
    : name(_name),
    casualName(_name),
    movable(_movable),
    consumable(false) {}

GameItemType::GameItemType(std::string _name, std::string _casualName, bool _movable)
    : name(_name),
    casualName(_casualName),
    movable(_movable),
    consumable(false) {}

GameItemType::GameItemType(std::string _name, bool _movable, bool _consumable)
    : name(_name),
    casualName(_name),
    movable(_movable),
    consumable(_consumable) {}

GameItemType::GameItemType(std::string _name, std::string _casualName, bool _movable, bool _consumable)
    : name(_name),
    casualName(_casualName),
    movable(_movable),
    consumable(_consumable) {}

std::string GameItemType::getName() const {
    return name;
}

std::string GameItemType::getCasualName() const {
    return casualName;
}

bool GameItemType::isMovable() const {
    return movable;
}
bool GameItemType::isConsumable() const {
    return consumable;
}



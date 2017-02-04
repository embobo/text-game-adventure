//
//  GameItemType.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameItemType.hpp"

GameItemType::GameItemType()
    : name("nothing"),
    casualName("nothing"),
    movable(false),
    consumable(false) {}

GameItemType::GameItemType(const std::string& aName)
    : name(aName),
    casualName(aName),
    movable(false),
    consumable(false) {}

GameItemType::GameItemType(const std::string& aName, const std::string& aCasualName)
    : name(aName),
    casualName(aCasualName),
    movable(false),
    consumable(false) {}

GameItemType::GameItemType(const std::string& aName, bool bMovable)
    : name(aName),
    casualName(aName),
    movable(bMovable),
    consumable(false) {}

GameItemType::GameItemType(const std::string& aName, const std::string& aCasualName, bool bMovable)
    : name(aName),
    casualName(aCasualName),
    movable(bMovable),
    consumable(false) {}

GameItemType::GameItemType(const std::string& aName, bool bMovable, bool bConsumable)
    : name(aName),
    casualName(aName),
    movable(bMovable),
    consumable(bConsumable) {}

GameItemType::GameItemType(const std::string& aName, const std::string& aCasualName, bool bMovable, bool bConsumable)
    : name(aName),
    casualName(aCasualName),
    movable(bMovable),
    consumable(bConsumable) {}

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



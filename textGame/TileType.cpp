//
//  game-location.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "TileType.hpp"

TileType::TileType() : name("the void"), accessible(false), exitable(false) {}

TileType::TileType(std::string _name, bool _accessible) : name(_name), accessible(_accessible), exitable(true) {}

TileType::TileType(std::string _name, bool _accessible, bool _exitable) : name(_name), accessible(_accessible), exitable(_exitable) {}

std::string TileType::getAreaName() const {
    return name;
}

bool TileType::isAccessible() const {
    return accessible;
}

bool TileType::isExitable() const {
    return exitable;
}

void TileType::setAccessible(bool _accessible) { accessible = _accessible; }

void TileType::setExitable(bool _exitable) { exitable = _exitable; }

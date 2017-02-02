//
//  TileType.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameTile.hpp"

GameTile::GameTile() : name("the void"), accessible(false), exitable(false) {}

GameTile::GameTile(std::string _name, bool _accessible) : name(_name), accessible(_accessible), exitable(true) {}

GameTile::GameTile(std::string _name, bool _accessible, bool _exitable) : name(_name), accessible(_accessible), exitable(_exitable) {}

std::string GameTile::getTileName() const {
    return name;
}

bool GameTile::isAccessible() const {
    return accessible;
}

bool GameTile::isExitable() const {
    return exitable;
}

void GameTile::setAccessible(bool _accessible) { accessible = _accessible; }

void GameTile::setExitable(bool _exitable) { exitable = _exitable; }

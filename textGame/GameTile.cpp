//
//  TileType.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameTile.hpp"





GameTile::GameTile() : name("the void"), tileType(TileType::VOID), accessible(true), exitable(false) {}

GameTile::GameTile(const TileType& _tileType, const std::string& _name, bool _accessible) : tileType(_tileType), name(_name),accessible(_accessible), exitable(true) {}

GameTile::GameTile(const TileType& _tileType, const std::string& _name,  bool _accessible, bool _exitable) : tileType(_tileType), name(_name), accessible(_accessible), exitable(_exitable) {}

GameTile* GameTile::buildGameTile(const TileType& _tileType, const std::string& _name, bool _accessible, bool _exitable) {
    if( _tileType == TileType::VOID ) {
        return new GameTile();
    }
    return new GameTile(_tileType,_name,_accessible,_exitable);
}

std::string GameTile::getTileName() const {
    return name;
}

TileType GameTile::getTileType() const {
    return tileType;
}

bool GameTile::isAccessible() const {
    return accessible;
}

bool GameTile::isExitable() const {
    return exitable;
}

void GameTile::setAccessible(bool _accessible) { accessible = _accessible; }

void GameTile::setExitable(bool _exitable) { exitable = _exitable; }

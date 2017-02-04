//
//  TileType.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameTile.hpp"

GameTile::GameTile()
    : name("the void"),
    tileType(TileType::VOID),
    accessible(true),
    exitable(false) {}

GameTile::GameTile(const TileType& aTileType,
                   const std::string& aName,
                   bool bAccessible)
    : tileType(aTileType),
    name(aName),
    accessible(bAccessible),
    exitable(true) {}

GameTile::GameTile(const TileType& aTileType,
                   const std::string& aName,
                   bool bAccessible,
                   bool bExitable)
    : tileType(aTileType),
    name(aName),
    accessible(bAccessible),
    exitable(bExitable) {}

GameTile* GameTile::gameTileBuilder(const TileType& aTileType,
                                    const std::string& aName,
                                    bool bAccessible,
                                    bool bExitable) {

    if( aTileType == TileType::VOID ) {
        return new GameTile();
    }
    return new GameTile(aTileType, aName, bAccessible, bExitable);
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

void GameTile::setAccessible(bool bAccessible) { accessible = bAccessible; }

void GameTile::setExitable(bool bExitable) { exitable = bExitable; }

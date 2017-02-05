//
//  GameTileBuilder.cpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameTileBuilder.hpp"

GameTile* GameTileBuilder::gameTileBuilder(const TileType& aTileType,
                                           const std::string& aName,
                                           bool bAccessible,
                                           bool bExitable) {
    if( aTileType == TileType::VOID ) {
        return new GameTile();
    }
    if( aTileType == TileType::WALL ) {
        return new GameTile(aTileType, "a wall", 0, 0);
    }
    return new GameTile(aTileType, aName, bAccessible, bExitable);
}

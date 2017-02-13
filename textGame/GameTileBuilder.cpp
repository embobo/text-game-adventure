//
//  GameTileBuilder.cpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameTileBuilder.hpp"

GameTile* GameTileBuilder::gameTileBuilder(const tileTypes::TileType& aTileType,
                                           const std::string& aName,
                                           bool bAccessible,
                                           bool bExitable) {
    GameTile* tile;
    if( aTileType == tileTypes::TileType::VOID ) {
        tile = new GameTile();
        tile->shortDescription = "the void";
        tile->longDescription = "A place of existential nothingness. You are likely to despair.";
        return tile;
    }
    if( aTileType == tileTypes::TileType::WALL ) {
        tile = new GameTile(aTileType, "a wall", 0, 0);
        // ignore, this tile will not be used
        return tile;
    }
    tile = new GameTile(aTileType, aName, bAccessible, bExitable);
    return tile;
}

void GameTileBuilder::gameTileAddShortDescription(GameTile& aTile,
                                const std::string& aShortDescription) {
    aTile.shortDescription = aShortDescription;
}

void GameTileBuilder::gameTileAddLongDescription(GameTile& aTile,
                                const std::string& aLongDescription) {
    aTile.longDescription = aLongDescription;
}

void GameTileBuilder::gameTileAddEnding(GameTile& aTile, const std::string& anEnding) {
    aTile.ending = anEnding;
}

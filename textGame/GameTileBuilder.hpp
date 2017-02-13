//
//  GameTileBuilder.hpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameTileBuilder_hpp
#define GameTileBuilder_hpp

#include "GameTile.hpp"

class GameTileBuilder {
public:
    /**
     * @param aTileType TileType defining the type of tile
     * @param aName string unique or specific name of the GameTile
     * @param bAccessible bool true if player can access this tile
     * @param bExitable bool true if player can exit this tile
     * @return GameTile* a new built game tile after checks
     *
     * @warning assigning the TileType as "VOID" will override all other parameters and set name to "void," accessible to true, and exitable to false
     */
    static GameTile* gameTileBuilder(const tileTypes::TileType& aTileType,
                              const std::string& aName,
                              bool bAccessible,
                              bool bExitable);
    /**
     * @param aTile GameTile to attach a short description to
     * @param aShortDescription string containing the description to attach
     */
    static void gameTileAddShortDescription(GameTile& aTile,
                                            const std::string& aShortDescription);
    /**
     * @param aTile GameTile to attach a long description to
     * @param aLongDescription string containing the description to attach
     */
    static void gameTileAddLongDescription(GameTile& aTile,
                                           const std::string& aLongDescription);
    /**
     * @param aTile GameTile to attach an ending to
     * @param anEnding the end met by leaving this tile to VOID
     */
    static void gameTileAddEnding(GameTile& aTile,
                                  const std::string& anEnding);
//    /**
//     * @param aTile1 first GameTile to connect
//     * @param aTile2 second GameTile to connect
//     * @param directionFrom1 direction to 2, from 1
//     */
//    static void connectTiles(GameTile& aTile1, GameTile& aTile2, movementDirections::directionsCardinal directionFrom1);
};

#endif /* GameTileBuilder_hpp */

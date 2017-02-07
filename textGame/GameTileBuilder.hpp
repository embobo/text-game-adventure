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
    static GameTile* gameTileBuilder(const TileType& aTileType,
                              const std::string& aName,
                              bool bAccessible,
                              bool bExitable);
};

#endif /* GameTileBuilder_hpp */

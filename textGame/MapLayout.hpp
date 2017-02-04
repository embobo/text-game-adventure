//
//  MapLayout.hpp
//  textGame
//
//  Created by Emma on 1/31/17.
//  @author Emma Bobola
//  @date 1/31/17
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef MapLayout_hpp
#define MapLayout_hpp

#include "GameTile.hpp"

/**
 * @class MapLayout contains the game map and navigation
 */

class MapLayout {
private:
    /** 2D array of GameTiles representing the game map */
    const GameTile* *gameMap;
public:
    /// @{
    /// @name MapLayout Constructors and Destructors

    MapLayout(const GameTile* *layout);

    /// @}
};

#endif /* MapLayout_hpp */

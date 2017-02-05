//
//  GameTile.hpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  @author Emma Bobola
//  @date 1/26/17
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameTile_hpp
#define GameTile_hpp

#include <stdio.h>
#include <utility>
#include "TileType.hpp"
#include "GameItemContainer.hpp"

/** @class GameTile
 * @brief GameTile is the base element for defining a game location
 */

class GameTile {
private:

    /** name of GameTile */
    const std::string name;
    /** type of GameTile */
    const TileType tileType;
    /** true if player can enter this tile */
    bool accessible;
    /** true if player can leave this tile */
    bool exitable;
    /** set of items contained on this tile */

public:
    /// @{
    /// @name Constructors for GameTile

    /**
     * Construct a GameTile with no parameters
     * @note defaults to a "the void" tile with bools accessible and exitable set to false
     */
    GameTile();
    /**
     * Construct a GameTile given a name and if player has access
     * @param aName string name of GameTile
     * @param bAccessible bool true if player can access
     * @note exitable set true by default
     */
    GameTile(const TileType& aTileType,
             const std::string& aName,
             bool bAccessible);
    /**
     * Construct a GameTile given name, if player has access and exit ability
     * @param aTileType type of tile
     * @param aName string name of GameTile
     * @param bAccessible bool true if player can access
     * @param bExitable bool true if player can exit
     */
    GameTile(const TileType& aTileType,
             const std::string& aName,
             bool bAccessible,
             bool bExitable);

    ~GameTile();

    /// @}

    /** items contained on this tile */
    GameItemContainer* tileItems;

    /// @{
    /// @name Setters and Getters for GameTile properties

    /**
     * @return string unique GameTile name
     */
    std::string getTileName() const;
    /**
     * @return string of the TileType
     */
    TileType getTileType() const;
    /**
     * @return string of the tile name and type
     */
    std::string getTileDetail() const;
    /**
     * @return bool whether user can access this GameTile
     */
    bool isAccessible() const;
    /**
     * @return bool whether user can leave this GameTile
     */
    bool isExitable() const;
    /**
     * @param bAccessible true if player can go to this GameTile
     */
    void setAccessible(bool bAccessible);
    /**
     * @param bExitable true if player can exit this GameTile
     */
    void setExitable(bool bExitable);


    /// @}
};

#endif /* GameTile_hpp */

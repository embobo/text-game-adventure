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
#include "DescriptiveException.hpp"
#include "TileType.hpp"
#include "GameItemContainer.hpp"
#include "movementDirections.hpp"

/** @class GameTile
 * @brief GameTile is the base element for defining a game location
 */

class GameTile {
protected:

    /** name of GameTile */
    const std::string name;
    /** short descripton of tile */
    std::string shortDescription;
    /** long description of tile */
    std::string longDescription;
    /** the ending if this is the last tile visited */
    std::string ending;
    /** type of GameTile */
    const tileTypes::TileType tileType;
    /** items on this tile */
    GameItemContainer* tileItems;
    /** true if player can enter this tile */
    bool accessible;
    /** true if player can leave this tile */
    bool exitable;
    std::list<GameTile*> connectedTiles;
    /** set of items contained on this tile */
    friend class GameTileBuilder;

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
    GameTile(const tileTypes::TileType& aTileType,
             const std::string& aName,
             bool bAccessible);
    /**
     * Construct a GameTile given name, if player has access and exit ability
     * @param aTileType type of tile
     * @param aName string name of GameTile
     * @param bAccessible bool true if player can access
     * @param bExitable bool true if player can exit
     */
    GameTile(const tileTypes::TileType& aTileType,
             const std::string& aName,
             bool bAccessible,
             bool bExitable);

    ~GameTile();

    /// @}

    /// @{
    /// @name Setters and Getters for GameTile properties

    /**
     * @return string unique GameTile name
     */
    std::string getTileName() const;
    /**
     * @return a short description of the tile
     */
    std::string getTileShortDescription() const;
    /**
     * @return a long description of the tile
     */
    std::string getTileLongDescription() const;
    /**
     * @return the ending met by leaving this tile
     */
    std::string getTileEnding() const;
    /**
     * @return a list of strings of the connected tiles names concatenated with their short descriptions
     */
    std::list<std::string> getConnectedTiles() const;
    /**
     * @return string of the TileType
     */
    tileTypes::TileType getTileType() const;
    /**
     * @return a constant pointer to a nearby tile
     */
    GameTile* getNearbyTile(movementDirections::directionsCardinal direction) const;
    /**
     *
     */

    /**
     * @return a constant pointer to the item container at this node
     */
    GameItemContainer* getTileItems() const;
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

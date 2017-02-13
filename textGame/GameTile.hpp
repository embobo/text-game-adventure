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
#include <vector>

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
    /** the lesson learned by leaving this tile */
    std::string lesson;
    /** the ending that occurs by leaving this tile */
    std::string ending;
    /** type of GameTile */
    const tileTypes::TileType tileType;
    /** items on this tile */
    //GameItemContainer* tileItems;
    /** true if player can enter this tile */
    bool accessible;
    /** true if player can leave this tile */
    bool exitable;
    /** true if player has been here */
    bool visited;
    /** tiles connected to this tile */
    std::vector<GameTile*> connectedTiles;

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

    //~GameTile();

    void resetTile();

    /// @}

    /// @{
    /// @name Setters and Getters for GameTile properties

    /**
     * read the name of this tile
     * @return string unique GameTile name
     */
    std::string getTileName() const;
    /**
     * read the short description of this tile
     * @return a short description of the tile as a string
     */
    std::string getTileShortDescription() const;
    /**
     * read the long description of this tile
     * @return a long description of the tile as a string
     */
    std::string getTileLongDescription() const;
    /**
     * read the lesson of this tile
     * @return the lesson of the tile as a string
     */
    std::string getTileLesson() const;
    /**
     * read the ending that occurs by leaving this tile
     * @return the ending met by leaving this tile as a string
     */
    std::string getTileEnding() const;
    /**
     * reads the names and short descriptions of connected tiles
     * @return a list of strings of the connected tiles names concatenated with their short descriptions
     */
    std::list<std::string> readConnectedTiles() const;
    /**
     * gets a tile in the list of connected tiles
     * @param index the 0-index of the desired tile
     * @return a pointer to the desired tile
     */
    GameTile* visitAdjacentTile(const int& index) const;
    /**
     * @return string of the TileType
     */
    tileTypes::TileType getTileType() const;
    /**
     * @return a constant pointer to the item container at this node
     */
    //GameItemContainer* getTileItems() const;
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
    /**
     *
     */
    void visitTile() { visited = true; }


    /// @}
};

#endif /* GameTile_hpp */

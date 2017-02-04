//
//  GameTile.hpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameTile_hpp
#define GameTile_hpp

#include <stdio.h>
#include <utility>
#include "TileType.hpp"

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

    /// @{
    /// @name Constructors for GameTile

    /**
     * Construct a GameTile with no parameters
     * @note defaults to a "the void" tile with bools accessible and exitable set to false
     */
    GameTile();
    /**
     * Construct a GameTile given a name and if player has access
     * @param _name string name of GameTile
     * @param _accessible bool true if player can access
     * @note exitable set true by default
     */
    GameTile(const TileType& _tileType, const std::string& _name, bool _accessible);
    /**
     * Construct a GameTile given name, if player has access and exit ability
     * @param _name string name of GameTile
     * @param _accessible bool true if player can access
     * @param _exitable bool true if player can exit
     */
    GameTile(const TileType& _tileType, const std::string& _name, bool _accessible, bool _exitable);

    /// @}

public:
    /** @todo change constructors to private and have a public Create function return a Node to perform checking
     */

    /// @{
    /// @name Builder for GameTile

    /**
     * @param _tileType TileType defining the type of tile
     * @param _name string unique or specific name of the GameTile
     * @param _accessible bool true if player can access this tile
     * @param _exitable bool true if player can exit this tile
     * @return GameTile* a new built game tile after checks
     *
     * @warning assigning the TileType as "VOID" will set name to "void," accessible to true, and exitable to false
     */
    GameTile* buildGameTile(const TileType& _tileType, const std::string& _name, bool _accessible, bool _exitable);

    /// @}

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
     * @param _accessible true if player can go to this GameTile
     */
    void setAccessible(bool _accessible);
    /**
     * @param _exitable true if player can exit this GameTile
     */
    void setExitable(bool _exitable);

    /// @}
};

#endif /* GameTile_hpp */

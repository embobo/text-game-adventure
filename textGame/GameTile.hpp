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
#include <string>
#include <utility>

/** @class GameTile
 * @brief GameTile is the base element for defining a game location
 */

class GameTile {
private:
    /** @enum set of tile types */
    static enum TileTypes = { Home, Work, Other };
    /** name of GameTile */
    const std::string name;
    /** true if player can enter this tile */
    bool accessible;
    /** true if player can leave this tile */
    bool exitable;

    /// @{
    /// @name private methods for GameTile

    /**
     *
     */
    std::string parseTileType();

    /// @}

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
     * @param _name string name of GameTile
     * @param _accessible bool true if player can access
     * @note exitable set true by default
     */
    GameTile(std::string _name, bool _accessible);
    /**
     * Construct a GameTile given name, if player has access and exit ability
     * @param _name string name of GameTile
     * @param _accessible bool true if player can access
     * @param _exitable bool true if player can exit
     */
    GameTile(std::string _name, bool _accessible, bool _exitable);

    /// @}


    /// @{
    /// @name Setters and Getters for GameTile properties

    /**
     * @return string unique GameTile name
     */
    std::string getTileName() const;
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

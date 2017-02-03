//
//  GameItemType.hpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  @date 1/26/17
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameItemType_hpp
#define GameItemType_hpp

#include <stdio.h>
#include <fstream>
#include <sstream>
#include "GameTile.hpp"

/** @class GameItemType
 * @brief GameItemType is the base class for defining items. It is a static reference for getting item type functionality. The parameters name and casual name are used by the game narrator.
 */
class GameItemType {
protected:
    /** full name of item */
    const std::string name;
    /** casual name of item */
    const std::string casualName;
    /** if player can take this item */
    const bool movable;
    /** if player can use or destroy this item */
    const bool consumable;
    
public:
    /// @{
    /// @name GameItemType Constructors

    /**
     * Construct a game item type with no parameters
     * @note creates an immovable, unconsumable item "nothing"
     */
    GameItemType();
    /**
     * Construct a game item type given name
     * @param _name string full name of game item
     * @note casualName set to name. movable and consumable set false
     */
    GameItemType(const std::string& _name);
    /**
     * Construct a game item type given name and casual name
     * @param _name string full name of game item
     * @param _casualName string casual name of game item
     * @note movable and consumable default to false
     */
    GameItemType(const std::string& _name,
                 const std::string& _casualName);
    /**
     * Construct a game item type given name and if it's movable
     * @param _name string full name of game item
     * @param _movable bool true if player can pick up item
     * @note casualName defaults to name and consumable defaults to false
     */
    GameItemType(const std::string& _name,
                 bool _movable);
    /**
     * Construct a game item type given name, casual name and if it's movable
     * @param _name string full name of game item
     * @param _casualName string casual name of game item
     * @param _movable bool true if player can pick up item
     * @note consumable defaults to false
     */
    GameItemType(const std::string& _name,
                 const std::string& _casualName,
                 bool _movable);
    /**
     * Construct a game item type given name, if it's movable, and if it's consumable
     * @param _name string full name of game item
     * @param _movable bool true if player can pick up item
     * @param _consumable bool true if player can destroy/use an item
     * @note casualName defaults to name
     */
    GameItemType(const std::string& _name,
                 bool _movable,
                 bool _consumable);
    /**
     * Construct a game item type given name, casual name, if it's movable, and if it's consumable
     * @param _name string full name of game item
     * @param _casualName string casual name of game item
     * @param _movable bool true if player can pick up item
     * @param _consumable bool true if player can destroy/use an item
     */
    GameItemType(const std::string& _name,
                 const std::string& _casualName,
                 bool _movable,
                 bool _consumable);
    /// @} End of constructors

    /// @{
    /// @name GameItemType Getters and Setters
    
    /**
     * @return string name of item type
     */
    std::string getName() const;
    /**
     * @return string of casual name of item type
     */
    std::string getCasualName() const;
    /**
     * @return bool true if player can pick up an object
     */
    bool isMovable() const;
    /**
     * @return bool true if player can destroy/use an object
     */
    bool isConsumable() const;

    /// @}
};

#endif /* GameItemType_hpp */

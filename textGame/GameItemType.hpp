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
    /** item description or other additional information */
    const std::string description;
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
     * @param aName string full name of game item
     * @note casualName set to name. movable and consumable set false
     */
    GameItemType(const std::string& aName);

    /**
     * Construct a game item type given name and casual name
     * @param aName string full name of game item
     * @param aCasualName string casual name of game item
     * @note movable and consumable default to false
     */
    GameItemType(const std::string& aName,
                 const std::string& aCasualName);
    /**
     * Construct a game item type given name and if it's movable
     * @param aName string full name of game item
     * @param bMovable bool true if player can pick up item
     * @note casualName defaults to name and consumable defaults to false
     */
    GameItemType(const std::string& aName,
                 bool bMovable);
    /**
     * Construct a game item type given name, casual name and if it's movable
     * @param aName string full name of game item
     * @param aCasualName string casual name of game item
     * @param bMovable bool true if player can pick up item
     * @note consumable defaults to false
     */
    GameItemType(const std::string& aName,
                 const std::string& aCasualName,
                 bool bMovable);
    /**
     * Construct a game item type given name, if it's movable, and if it's consumable
     * @param aName string full name of game item
     * @param bMovable bool true if player can pick up item
     * @param bConsumable bool true if player can destroy/use an item
     * @note casualName defaults to name
     */
    GameItemType(const std::string& aName,
                 bool bMovable,
                 bool bConsumable);
    /**
     * Construct a game item type given name, casual name, if it's movable, and if it's consumable
     * @param aName string full name of game item
     * @param aCasualName string casual name of game item
     * @param bMovable bool true if player can pick up item
     * @param bConsumable bool true if player can destroy/use an item
     */
    GameItemType(const std::string& aName,
                 const std::string& aCasualName,
                 const std::string& aDescription,
                 bool bMovable,
                 bool bConsumable);

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

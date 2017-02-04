//
//  GameItemContainer.hpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  @author Emma Bobola
//  @date 2/4/17
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameItemContainer_hpp
#define GameItemContainer_hpp

#include <string>
#include <map>
#include <list>

/** @class GameItemContainer
 * @brief GameItemContainer is a class used to contain item counts
 */

class GameItemContainer {
private:
    /** map of all item names and the amount of the item */
    std::map<std::string,int> itemCounts;

public:
    /// @{
    /// @name GameItemContainer Constructors and Destructors
    
    GameItemContainer();

    /// @}

    /// @{
    /// @name GameItemContainer methods

    /**
     * @param itemName name of the item
     * @return amount of this item in the container
     */
    int getItemCount(const std::string& itemName) const;

    /**
     * @param itemName to be added to the container
     */
    void addItem(const std::string& itemName);

    /**
     * @return list of strings of all items in the container
     */
    std::list<std::string> getAllItemNames() const;

    /**
     * @return list of all item names and their counts
     */
    std::list<std::pair<std::string,int>> getAllItemNamesAndCounts() const;

    /// @}
};

#endif /* GameItemContainer_hpp */

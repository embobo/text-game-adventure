//
//  GameItemContainer.cpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameItemContainer.hpp"

int GameItemContainer::getItemCount(const std::string& itemName) const {
    if( itemCounts.count(itemName) > 0 )
        return itemCounts.at(itemName);
    return 0;
}

void GameItemContainer::addItem(const std::string& itemName) {
    if( itemCounts.count(itemName) == 0 )
        itemCounts[itemName] = 1;
    else
        ++(itemCounts[itemName]);
}

std::list<std::string> GameItemContainer::getAllItemNames() const {
    std::list<std::string> items;
    for (auto it = itemCounts.cbegin(); it != itemCounts.cend(); ++it) {
        items.push_back((*it).first);
    }
    return items;
}

std::list<std::pair<std::string,int>> GameItemContainer::getAllItemNamesAndCounts() const {
    std::list<std::pair<std::string,int>> items;
    for (auto it = itemCounts.cbegin(); it != itemCounts.cend(); ++it) {
        std::pair<std::string,int> item ((*it).first,(*it).second);
        items.push_back(item);
    }
    return items;
}

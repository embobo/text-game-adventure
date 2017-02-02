//
//  GameItemSet.hpp
//  textGame
//
//  Created by Emma on 2/1/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameItemSet_hpp
#define GameItemSet_hpp

#include "GameItem.hpp"

class GameItemSet {
private:
    std::string defaultFile = "ItemsSet";
    std::map<std::string,GameItem*> itemSet; // map of all types of game items in game
    void readInItemsFromFile(std::ifstream* f_h);
    void parseLineAddItem(std::string line);
public:
    GameItemSet(); // read in from default file all game items
    const GameItem* getItemInfoByName(std::string name);
};

#endif /* GameItemType_hpp */

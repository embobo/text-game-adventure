//
//  GameItemSet.cpp
//  textGame
//
//  Created by Emma on 2/1/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameItemSet.hpp"

void GameItemSet::readInItemsFromFile(std::ifstream* f_h) {
    // iterate through file and add items
    std::string line;
    while (getline (*f_h,line))
    {
        parseLineAddItem(line);
    }
    f_h->close();
}

void GameItemSet::parseLineAddItem(std::string line) {
    std::string name;
    bool move,consume;
    std::stringstream linestream(line);
    linestream >> name >> move >> consume;
    GameItem* item = new (std::nothrow) GameItem(name,move,consume);
    itemSet[name] = item;
}

GameItemSet::GameItemSet() {
    // get file handle
    std::ifstream f_h (DEFAULTFILE);
    if (!f_h.is_open()) {
        return;
    }
    readInItemsFromFile(&f_h);
} // read in from a default file all game items


const GameItem* GameItemSet::getItemInfoByName(std::string name) {
    return itemSet[name];
}

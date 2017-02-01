//
//  game-item.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameItem.hpp"

GameItemType::GameItemType(string item_name) : moveable(false), consumable(false) {
    name = item_name;
}

GameItemType::GameItemType(string item_name, bool is_moveable) : consumable(false) {
    name = item_name;
    moveable = is_moveable;
}

GameItemType::GameItemType(string item_name, bool is_moveable, bool is_consumable) {
    name = item_name;
    moveable = is_moveable;
    consumable = is_consumable;
}

string GameItemType::getName() const {
    return name;
}
bool GameItemType::isMoveable() const {
    return moveable;
}
bool GameItemType::isConsumable() const {
    return consumable;
}

void GameItemSet::readInItemsFromFile(ifstream* f_h) {
    // iterate through file and add items
    string line;
    while (getline (*f_h,line))
    {
        parseLineAddItem(line);
    }
    f_h->close();
}

void GameItemSet::parseLineAddItem(string line) {
    string name;
    bool move,consume;
    stringstream linestream(line);
    linestream >> name >> move >> consume;
    GameItemType* item = new GameItemType(name,move,consume);
    itemSet[name] = item;
}

GameItemSet::GameItemSet() {
    // get file handle
    ifstream f_h (DEFAULTFILE);
    if (!f_h.is_open()) {
        return;
    }
    readInItemsFromFile(&f_h);
} // read in from a default file all game items


const GameItemType* GameItemSet::getItemInfoByName(string name) {
    return itemSet[name];
}



//
//  game-item.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "game-item.hpp"

GameItemType::GameItemType(string item_name) : isMoveable(false), isConsumable(false) {
    name = item_name;
}

GameItemType::GameItemType(string item_name, bool is_moveable) : isConsumable(false) {
    name = item_name;
    isMoveable = is_moveable;
}

GameItemType::GameItemType(string item_name, bool is_moveable, bool is_consumable) {
    name = item_name;
    isMoveable = is_moveable;
    isConsumable = is_consumable;
}

string GameItemType::GetName() const {
    return name;
}
bool GameItemType::IsMoveable() const {
    return isMoveable;
}
bool GameItemType::IsConsumable() const {
    return isConsumable;
}


void GameItemSet::ReadInItemsFromFile(ifstream* f_h) {

    // iterate through file and add items
    string line;
    while (getline (*f_h,line))
    {
        // add items to map
        ParseLineAddItem(line);
    }
    f_h->close();
}

void GameItemSet::ParseLineAddItem(string line) {
    string name = "";
    
    GameItemType* item = new GameItemType();
}

GameItemSet::GameItemSet() {
    // get file handle
    ifstream f_h (DEFAULTFILE);
    if (!f_h.is_open()) {
        return;
    }
    ReadInItemsFromFile(&f_h);
} // read in from a default file all game items


const GameItemType* GameItemSet::GetItemInfoByName(string name) {
    return itemSet[name];
}



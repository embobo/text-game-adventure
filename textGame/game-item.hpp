//
//  game-item.hpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef game_item_hpp
#define game_item_hpp

#include <stdio.h>
#include <map>
#include <fstream>
#include <sstream>
#include "game-area.hpp"
#define DEFAULTFILE "game-items-set"

using namespace std;

class GameItemType {
protected:
    string name;
    bool isMoveable;
    bool isConsumable;
public:
    GameItemType();
    GameItemType(string item_name);
    GameItemType(string item_name, bool is_moveable);
    GameItemType(string item_name, bool is_moveable, bool is_consumable);
    string GetName() const;
    bool IsMoveable() const;
    bool IsConsumable() const;
};

class GameItemSet {
private:
    map<string,GameItemType*> itemSet; // map of all types of game items in game

    void ReadInItemsFromFile(ifstream* f_h);
    void ParseLineAddItem(string line);
public:
    GameItemSet(); // read in from default file all game items
    const GameItemType* GetItemInfoByName(string name);
};

#endif /* game_item_hpp */

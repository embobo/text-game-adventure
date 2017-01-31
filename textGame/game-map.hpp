//
//  game-map.hpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef game_map_hpp
#define game_map_hpp

#include <stdio.h>
#include "game-item.hpp"
#include <set>
#include <map>
#include <vector>

using namespace std;

class GameMapNode {
private:
    GameArea* here;
    map<string,GameItem*> itemsHere;
    vector<string> items;
    map<string,GameMapNode*> connectedLocations;
    vector<string> connections;
public:
    GameMapNode(GameArea* area);
    ~GameMapNode();
    string GetAreaName();
    GameArea* GetArea();
    void AddItem(GameItem* item);
    int TakeItem(string item_name);
    vector<string> GetItemList();
    void AddConnection(GameMapNode* location);
    vector<string> GetConnectionsList();
    GameMapNode* GetConnectionNode(string move_to);
};

class GameMap {
private:
    GameMapNode* *currentLocation;

    vector<GameMapNode*> locations;
    vector<GameItem*> items;

    GameMapNode* bedroom;
    GameMapNode* work;
    GameMapNode* supplyRoom;
    GameMapNode* forest;
    GameMapNode* library;

    void ConnectLocations(GameMapNode* here, GameMapNode* there);

public:
    GameMap();
    ~GameMap();

    GameMapNode* const & GetCurrentLocation() const { return *currentLocation; }
    void Reset();
};
#endif /* game_map_hpp */

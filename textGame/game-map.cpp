//
//  game-map.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "game-map.hpp"

GameMapNode::GameMapNode(GameArea* location) {
    here = location;
}

GameMapNode::~GameMapNode() {
    delete here;
    here = NULL;
    //itemsHere.clear();
}

string GameMapNode::GetAreaName() {
    return here->GetAreaName();
}

GameArea* GameMapNode::GetArea() {
    return here;
}

void GameMapNode::AddItem(GameItem* item) {
    // check dictionary for this item
    map<string,GameItem*>::iterator it;
    it = itemsHere.find(item->GetItemName());
    if (it != itemsHere.end()) { // already exists so just add 1 to it
        (itemsHere.at(item->GetItemName()))->PutItem(1);
    }
    else { // new item
        itemsHere[item->GetItemName()] = item;
        items.push_back(item->GetItemName());
    }
}

int GameMapNode::TakeItem(string item_name) {
    // check dictionary for this item
    map<string,GameItem*>::iterator it;
    it = itemsHere.find(item_name);
    if (it != itemsHere.end()) { // already exists so just take 1
        int taken = 0;
        taken = (itemsHere.at(item_name))->TakeItem(1);
        // if none left, delete item and remove GameItem from dictionary
        if ((itemsHere.at(item_name))->GetNumLeft() == 0) {
            delete itemsHere.at(item_name);
            itemsHere.erase(it);
        }
        return taken;
    }
    else { // item does not exist
        return 0;
    }
}


void GameMapNode::AddConnection(GameMapNode* location) {
    connectedLocations[location->GetAreaName()] = location;
    connections.push_back(location->GetAreaName());
}

vector<string> GameMapNode::GetConnectionsList() {
    return connections;
}

GameMapNode* GameMapNode::GetConnectionNode(string move_to) {
    map<string,GameMapNode*>::iterator it;
    it = connectedLocations.find(move_to);
    if (it != connectedLocations.end())
        return connectedLocations.at(move_to);
    return NULL;
}





void GameMap::ConnectLocations(GameMapNode* here, GameMapNode* there) {
    here->AddConnection(there);
    there->AddConnection(here);
}

GameMap::GameMap(){
    // create locations
    
    // connect areas

    // todo: items
    // create items
    // add items to their origin rooms

    // set starting location

}

GameMap::~GameMap() {

}

void GameMap::Reset() {
    return; // not implemented
}

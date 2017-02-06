//
//  GameMap.cpp
//  textGame
//
//  Created by Emma on 2/6/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameMap.hpp"

GameMap::GameMap() {
    createGameMap();
}

GameMap::~GameMap() {
    std::map<std::string,GameTileNode*>::iterator it = tileNodes.begin();
    for(it = tileNodes.begin(); it != tileNodes.end(); ++it) {
        delete it->second;
        it->second = NULL;
    }
}

GameTileNode* GameMap::getCurrentNode() const {
    return currentNode;
}

void GameMap::reset() {
    currentNode = startNode;
}

void GameMap::createGameMap() {
    // hacked together right now but whatever
    tileNodes.emplace("bedroom",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::HOME, "bedroom", true, true)));
    tileNodes.emplace("bathroom",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::HOME, "bathroom", true, true)));
    tileNodes.emplace("cubicle",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::WORK, "bedroom", true, true)));
}

void GameMap::connectNodes(GameTileNode* tile1,
                            TileDirectionsCardinal direction1,
                            GameTileNode* tile2,
                            TileDirectionsCardinal direction2) {
    tile1->setConnectedNode(direction1, *tile2);
    tile2->setConnectedNode(direction2, *tile1);
}

//
//  GameMap.cpp
//  textGame
//
//  Created by Emma on 2/6/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameMap.hpp"

//GameTile* const GameMap::

GameMap::GameMap() : voidTile(GameTileBuilder::gameTileBuilder(tileTypes::TileType::VOID, "void", true, true)), gameMap(createGameMap()) {
}

GameMap::~GameMap() {
    std::map<std::string,GameTile*>::iterator it = tileNodes.begin();
    for(it = tileNodes.begin(); it != tileNodes.end(); ++it) {
        delete it->second;
        it->second = NULL;
    }
}

GameTile* GameMap::getCurrentNode() const {
    return currentNode;
}

void GameMap::reset() {
    currentNode = startNode;
}

//void GameMap::createGameMap() {
//    for(int ww = 0; ww < MAP_WIDTH; ++ww) {
//        for(int hh = 0; hh < MAP_HEIGHT; ++hh) {
//            gameMap[ww][hh] = voidTile;
//        }
//    }
//}

void GameMap::connectNodes(GameTile* tile1,
                            GameTile* tile2) {
    
}

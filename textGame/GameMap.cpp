//
//  GameMap.cpp
//  textGame
//
//  Created by Emma on 2/6/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameMap.hpp"

//GameTile* const GameMap::

GameMap::GameMap() {
    createGameMap();
}

GameMap::~GameMap() {
    std::list<GameTile*>::iterator it = tileNodes.begin();
    for(it = tileNodes.begin(); it != tileNodes.end(); ++it) {
        delete (*it);
    }
}

GameTile* GameMap::getCurrentNode() const {
    return currentNode;
}

void GameMap::reset() {
    currentNode = startNode;
}

void GameMap::createGameMap() {
    throw DescriptiveException("Not Implemented");
}

//void GameMap::createGameMap() {
//    for(int ww = 0; ww < MAP_WIDTH; ++ww) {
//        for(int hh = 0; hh < MAP_HEIGHT; ++hh) {
//            gameMap[ww][hh] = voidTile;
//        }
//    }
//}

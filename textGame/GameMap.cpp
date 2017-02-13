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
    std::vector<GameTile*>::iterator it = tileNodes.begin();
    for(it = tileNodes.begin(); it != tileNodes.end(); ++it) {
        delete (*it);
    }
}

GameTile* GameMap::getCurrentNode() const {
    return currentNode;
}

GameTile GameMap::getLastNode() const {
    return *lastNode;
}

bool GameMap::moveNode(const int& nodeIndex) {
    lastNode = currentNode;
    lastNode->visitTile(); // set true that this node has been visited
    currentNode = lastNode->visitAdjacentTile(nodeIndex);
    return (currentNode->getTileType() != tileTypes::VOID);
}

void GameMap::resetMap() {
    currentNode = startNode;
    lastNode = currentNode;
    std::vector<GameTile*>::iterator it = tileNodes.begin();
    for(it = tileNodes.begin(); it != tileNodes.end(); ++it) {
        (*it)->resetTile();
    }
}

void GameMap::createGameMap() {
    //throw DescriptiveException("Not Implemented");
    // create tiles from defaults in DefaultTiles
    for(auto it = DefaultTileHelper::defaults.cbegin(); it != DefaultTileHelper::defaults.cend(); ++it) {
        createGenericTile(it->name,
                          it->shortDescription,
                          it->longDescription,
                          it->lesson,
                          it->ending);
    }
    for(auto it = DefaultTileHelper::connects.cbegin(); it != DefaultTileHelper::connects.cend(); ++it) {
        connectTiles(it->first, it->second);
    }
    // add the game exiting void tile
    createAndConnectVoidTile();
    // set the start node
    startNode = tileNodes.at(0);
    currentNode = startNode;
    lastNode = currentNode;
}

void GameMap::createGenericTile(const std::string& name,
                                const std::string& shortDescription,
                                const std::string& longDescription,
                                const std::string& lesson,
                                const std::string& ending) {
    GameTile* tile = GameTileBuilder::gameTileBuilder(tileTypes::OTHER, name, 1, 1);
    GameTileBuilder::gameTileAddShortDescription(*tile, shortDescription);
    GameTileBuilder::gameTileAddLongDescription(*tile, longDescription);
    GameTileBuilder::gameTileAddLesson(*tile, lesson);
    GameTileBuilder::gameTileAddEnding(*tile, ending);
    tileNodes.push_back(tile);
}

void GameMap::createAndConnectVoidTile() {
    // create and add the exit tile
    tileNodes.push_back(GameTileBuilder::gameTileBuilder(tileTypes::VOID, "", 1, 1));
    // connect void tile to each other tile
    for(int it = 0; it < (tileNodes.size() - 1); ++it) {
        connectTiles(it,(int)(tileNodes.size() - 1));
    }
}

void GameMap::connectTiles(const int& index1, const int& index2) {
    GameTileBuilder::connectTiles(*(tileNodes.at(index1)),
                                  *(tileNodes.at(index2)));
}

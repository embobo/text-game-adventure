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
    // hacked together right now but I'm spending too much time on this
    // create tiles
    tileNodes.emplace("bedroom",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::HOME, "bedroom", true, true)));
    tileNodes.emplace("outside",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::OTHER, "outside", true, true)));
    tileNodes.emplace("alley",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::OTHER, "alley", true, true)));
    tileNodes.emplace("cubicle",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::WORK, "cubicle", true, true)));
    tileNodes.emplace("supply",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::WORK, "supply room", false, true)));
    tileNodes.emplace("cafe",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::OTHER, "coffee shop", true, true)));
    tileNodes.emplace("void",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::VOID, "", true, false)));
    tileNodes.emplace("forest",new GameTileNode(GameTileBuilder::gameTileBuilder(TileType::OTHER, "forest", true, true)));
    
    // connect tiles
    connectNodes(tileNodes.at("bedroom"), tileNodes.at("outside"));
    connectNodes(tileNodes.at("outside"), tileNodes.at("cafe"));
    connectNodes(tileNodes.at("outside"), tileNodes.at("cubicle"));
    connectNodes(tileNodes.at("outside"), tileNodes.at("forest"));
    connectNodes(tileNodes.at("cubicle"), tileNodes.at("supply"));
    connectNodes(tileNodes.at("cafe"), tileNodes.at("cubicle"));
    connectNodes(tileNodes.at("void"), tileNodes.at("cubicle"));
    connectNodes(tileNodes.at("void"), tileNodes.at("supply"));
    connectNodes(tileNodes.at("void"), tileNodes.at("bedroom"));
    connectNodes(tileNodes.at("void"), tileNodes.at("cafe"));


}

void GameMap::connectNodes(GameTileNode* tile1,
                            GameTileNode* tile2) {
    tile1->setConnectedNode(tile2->getTile()->getTileName(), *tile2);
    tile2->setConnectedNode(tile1->getTile()->getTileName(), *tile1);
}

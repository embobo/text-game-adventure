//
//  GameTileNode.cpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameTileNode.hpp"

GameTile* GameTileNode::voidTile = new GameTile();

GameTileNode::GameTileNode() : here(voidTile) {
    items = new GameItemContainer();
}

GameTileNode::GameTileNode(GameTile* const aTile) : here(aTile) {
    items = new GameItemContainer();
}

GameTileNode::~GameTileNode() {
    delete here;
    here = NULL;
    delete items;
    items = NULL;
    delete voidTile;
    voidTile = NULL;
}

GameTile* GameTileNode::getTile() const {
    return here;
}

GameItemContainer* GameTileNode::getItems() const {
    return items;
}

std::list<std::string> GameTileNode::getConnectedNodesList() {
    std::list<std::string> connectionsList;
    // do things here
    return connectionsList;
}

GameTileNode GameTileNode::getConnectedNode(std::string node) const {
    return connectedNodes.at(node);
}

void GameTileNode::setConnectedNode(std::string node, const GameTileNode tileNode) {
    connectedNodes.emplace(node, tileNode);
}

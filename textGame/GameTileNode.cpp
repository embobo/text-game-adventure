//
//  GameTileNode.cpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameTileNode.hpp"

GameTile* GameTileNode::voidTile = new GameTile();

GameTileNode::GameTileNode() : here(*voidTile) {}

GameTileNode::GameTileNode(const GameTile& aTile) : here(aTile) {}

GameTileNode::~GameTileNode() {
    delete items;
    items = NULL;
    delete voidTile;
    voidTile = NULL;
}

GameTile GameTileNode::getTile() {
    return here;
}

GameItemContainer GameTileNode::getItems() {
    return *items;
}

GameTileNode GameTileNode::getConnectedNode(TileDirectionsCardinal direction) const {
    return connectedNodes.at(direction);
}

void GameTileNode::setConnectedNode(TileDirectionsCardinal direction, const GameTileNode tileNode) {
    connectedNodes.emplace(direction, tileNode);
}

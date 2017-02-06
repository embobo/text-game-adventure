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

GameTileNode GameTileNode::getConnectedNode(TileDirectionsCardinal direction) const {
    return connectedNodes.at(direction);
}

void GameTileNode::setConnectedNode(TileDirectionsCardinal direction, const GameTileNode tileNode) {
    connectedNodes.emplace(direction, tileNode);
}

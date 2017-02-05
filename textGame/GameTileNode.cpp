//
//  GameTileNode.cpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameTileNode.hpp"

GameTile* const GameTileNode::voidTile = new GameTile();

GameTileNode::GameTileNode() : here(voidTile) {}

GameTileNode::GameTileNode(GameTile* const aTile) : here(aTile) {}

GameTile GameTileNode::getTile() {
    return *here;
}

GameTileNode GameTileNode::getConnectedNode(TileDirectionsCardinal direction) const {
    return connectedNodes.at(direction);
}

void GameTileNode::setConnectedNode(TileDirectionsCardinal direction, const GameTileNode tileNode) {
    connectedNodes.emplace(direction, tileNode);
}

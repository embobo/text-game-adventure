//
//  TileType.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameTile.hpp"

GameTile::GameTile()
    : name("I accept my fate"),
    tileType(tileTypes::TileType::VOID),
    accessible(true),
    exitable(false),
    visited(false),
    shortDescription("Nothingness"),
    longDescription ("The emptiness of existential confusion."),
    lesson("Try again."),
    ending("Error.") {
        //tileItems = new GameItemContainer();
    }

GameTile::GameTile(const tileTypes::TileType& aTileType,
                   const std::string& aName,
                   bool bAccessible)
    : tileType(aTileType),
    name(aName),
    accessible(bAccessible),
    exitable(true),
    visited(false) {
        //tileItems = new GameItemContainer();
    }

GameTile::GameTile(const tileTypes::TileType& aTileType,
                   const std::string& aName,
                   bool bAccessible,
                   bool bExitable)
    : tileType(aTileType),
    name(aName),
    accessible(bAccessible),
    exitable(bExitable),
    visited(false) {
        //tileItems = new GameItemContainer();
    }

//GameTile::~GameTile() {
//    delete tileItems;
//    tileItems = NULL;
//}

void GameTile::resetTile() {
    visited = false;
}

std::string GameTile::getTileName() const {
    return name;
}

std::string GameTile::getTileShortDescription() const {
    return shortDescription;
}

std::string GameTile::getTileLongDescription() const {
    if(!visited)
        return longDescription;
    else
        return lesson;
}

std::string GameTile::getTileLesson() const {
    return lesson;
}

std::string GameTile::getTileEnding() const {
    return ending;
}

tileTypes::TileType GameTile::getTileType() const {
    return tileType;
}

//GameItemContainer* GameTile::getTileItems() const {
//    throw DescriptiveException("Not Implemented");
//    //return tileItems;
//}

std::list<std::string> GameTile::readConnectedTiles() const {
    std::list<std::string> connections;
    std::list<GameTile*>::iterator it;
    for (auto it = connectedTiles.cbegin(); it != connectedTiles.cend(); ++it) {
        connections.push_back((*it)->getTileName() + " - " + (*it)->getTileShortDescription());
    }
    return connections;
}

GameTile* GameTile::visitAdjacentTile(const int& index) const {
    if(index > (connectedTiles.size() - 1))
        throw DescriptiveException("GameTile index out of range","GameTile::getAdjacentTile");
    return connectedTiles.at(index);
}

bool GameTile::isAccessible() const {
    return accessible;
}

bool GameTile::isExitable() const {
    return exitable;
}

void GameTile::setAccessible(bool bAccessible) {
    if( tileType != tileTypes::TileType::WALL )
        accessible = bAccessible;
}

void GameTile::setExitable(bool bExitable) {
    if( tileType != tileTypes::TileType::VOID && tileType != tileTypes::TileType::WALL )
        exitable = bExitable;
}

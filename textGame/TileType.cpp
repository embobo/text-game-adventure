//
//  game-location.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "TileType.hpp"

TileType::TileType(std::string area_name) {
    name = area_name;
}
std::string TileType::getAreaName() const {
    return name;
}
bool TileType::isAccessible() const {
    return accessible;
}

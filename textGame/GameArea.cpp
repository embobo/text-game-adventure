//
//  game-location.cpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameArea.hpp"

GameArea::GameArea(string area_name) {
    name = area_name;
}
string GameArea::getAreaName() const {
    return name;
}

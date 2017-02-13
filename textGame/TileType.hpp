//
//  TileType.hpp
//  textGame
//
//  Created by Emma on 2/2/17.
//  @author Emma Bobola
//  @date 2/2/17
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef TileType_hpp
#define TileType_hpp

#include <stdio.h>
#include <string>

namespace tileTypes {
    /** @enum types of game tiles */
    enum TileType { HOME, WORK, VOID, WALL, VIA, OTHER };
    static const std::string toString(const TileType& tileType) {
        switch (tileType) {
            case HOME:
                return "home";
                break;
            case WORK:
                return "work";
                break;
            case VOID:
                return "the void";
                break;
            case WALL:
                return "wall";
                break;
            case VIA:
                return "path";
                break;
            default:
                return "unknown";
                break;
        }
    }
}


#endif /* TileType_hpp */

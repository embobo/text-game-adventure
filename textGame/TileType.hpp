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
                return "void";
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
    static const TileType toEnum(const std::string tileName) {
        if(tileName.compare("home"))
            return HOME;
        if(tileName.compare("work"))
            return WORK;
        if(tileName.compare("void"))
            return VOID;
        if(tileName.compare("wall"))
            return WALL;
        if(tileName.compare("via"))
            return VIA;
        else return OTHER;
    }
}


#endif /* TileType_hpp */

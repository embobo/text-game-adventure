//
//  TileDirections.hpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef TileDirections_hpp
#define TileDirections_hpp

/**
 * @namespace tileDirections holds enums representing directions
 */
namespace movementDirections {
    /** @enum types of game tile directions (cardinal) */
    enum directionsCardinal { NORTH, EAST, SOUTH, WEST, UNKNOWN };
    static const std::string toString(const directionsCardinal& direction) {
        switch (direction) {
            case NORTH:
                return "north";
                break;
            case EAST:
                return "east";
                break;
            case SOUTH:
                return "south";
                break;
            case WEST:
                return "west";
                break;
            default:
                return "unknown";
                break;
        }
    }
    static const directionsCardinal toEnum(const std::string& direction) {
        if(direction.compare("north") != 0)
            return NORTH;
        if(direction.compare("east") != 0)
            return EAST;
        if(direction.compare("south") != 0)
            return SOUTH;
        if(direction.compare("west") != 0)
            return WEST;
        return UNKNOWN;
    }
}


#endif /* TileDirections_hpp */

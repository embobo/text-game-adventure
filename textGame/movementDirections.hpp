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
    enum directionsCardinal { NORTH, EAST, SOUTH, WEST };
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
}


#endif /* TileDirections_hpp */

//
//  game-location.hpp
//  textGame
//
//  Created by Emma on 1/26/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef game_location_hpp
#define game_location_hpp

#include <stdio.h>
#include <string>
#include <utility>

class TileType {
private:
    std::string name;
    bool accessible;
public:
    TileType(std::string area_name, bool is_accessible);
    /**
     * returns unique area name
     */
    std::string getAreaName() const;
    /**
     * returns whether user can access this tile type
     */
    bool isAccessible() const;
};

#endif /* game_location_hpp */

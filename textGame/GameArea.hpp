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

class GameArea {
private:
    std::string name;
public:
    GameArea(std::string area_name);
    /**
     * returns unique area name
     */
    std::string getAreaName() const;
};

#endif /* game_location_hpp */

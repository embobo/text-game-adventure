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

using namespace std;

class GameArea {
private:
    string name;
public:
    GameArea(string area_name);
    string GetAreaName() const;
};

#endif /* game_location_hpp */

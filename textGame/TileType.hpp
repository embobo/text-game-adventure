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
    const std::string name;
    bool accessible;
    bool exitable;
public:
    TileType();
    TileType(std::string _name, bool _accessible);
    TileType(std::string _name, bool _accessible, bool _exitable);
    /**
     * returns unique area name
     */
    std::string getAreaName() const;
    /**
     * returns whether user can access this tile type
     */
    bool isAccessible() const;
    /**
     * returns whether user can leave this tile type
     */
    bool isExitable() const;

    void setAccessible(bool _accessible);
    void setExitable(bool _exitable);
};

#endif /* game_location_hpp */

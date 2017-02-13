//
//  DefaultTiles.hpp
//  textGame
//
//  Created by Emma on 2/13/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef DefaultTiles_hpp
#define DefaultTiles_hpp

#include <string>
#include <array>

/**
 * @struct TileValues
 * describes default string values for a generic "OTHER" tile
 */
struct TileValues {
    const std::string name;
    const std::string shortDescription;
    const std::string longDescription;
    const std::string lesson;
    const std::string ending;

    /// @{
    /// @name Constructor for TileValues
    /**
     * constructor for a set of tile values
     * @param n the name of the tile
     * @param s the short description for the tile
     * @param l the long description for the tile
     * @param ex the moral of the tile
     * @param en the ending for the tile
     */
    TileValues(const std::string& n,
               const std::string& s,
               const std::string& l,
               const std::string& ex,
               const std::string& en)
    : name(n),
    shortDescription(s),
    longDescription(l),
    lesson(ex),
    ending(en) {}
    /// @}
};

class DefaultTileHelper {
public:
    static const std::array<TileValues,5> defaults;
    static const std::array<std::pair<int, int>,10> connects;
};

#endif /* DefaultTiles_hpp */

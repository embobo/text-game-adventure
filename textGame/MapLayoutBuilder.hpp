//
//  MapLayoutBuilder.hpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef MapLayoutBuilder_hpp
#define MapLayoutBuilder_hpp

#include "MapLayout.hpp"

class MapLayoutBuilder {
private:
    
public:

    /// @{
    /// @name MapLayoutBuilder methods

    /**
     * @return constant pointer to a map layout
     */
    MapLayout* build() const;

    /// @}
};

#endif /* MapLayoutBuilder_hpp */

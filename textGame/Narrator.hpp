//
//  Narrator.hpp
//  textGame
//
//  Created by Emma on 1/23/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef Narrator_hpp
#define Narrator_hpp
#include "GameItemReferenceSetBuilder.hpp"
#include "GameMap.hpp"


/**
 * Narrator Class. This is the heart of the game
 */

class Narrator {
private:

    /** Reference to GameItemTypes */
    static const GameItemReferenceSet* itemReference;

    GameMap* map;
    
public:
    /// @{
    /// @name Narrator Constructors and Destructors

    /**
     * Default constructor
     */
    Narrator();

    /**
     * Destructor
     */
    ~Narrator();

    /// @}

    /// @{
    /// @name Narrator public methods

    /**
     *
     */
    void reset();

    /**
     *
     */
    //std::string getFeelings();

    /**
     *
     */
    std::string help();

    /// @}
};


#endif /* Narrator_hpp */

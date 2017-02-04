//
//  GameItemReferenceSetBuilder.hpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameItemReferenceSetBuilder_hpp
#define GameItemReferenceSetBuilder_hpp

#include <stdio.h>
#include <vector>
#include "GameItemReferenceSet.hpp"

/** @class GameItemReferenceSetBuilder
 * @brief GameItemReferenceSetBuilder is used to construct the references to item names and usage limitations
 */

class GameItemReferenceSetBuilder {
private:
    /** map of the referenceSet to be created */
    std::map<std::string, GameItemType> referenceSet;
    std::vector<GameItemType*> pointerSet;

public:
    /// @{
    /// @name GameItemReferenceSetBuilder Constructors and Destructors
    /**
     * @note default constructor will construct a default list of game items
     */
    GameItemReferenceSetBuilder();
    ~GameItemReferenceSetBuilder();

    /// @}

    /// @{
    /// @name GameItemReferenceSetBuilder public methods

    /**
     * @return map of string keys and GameItemType values
     */
    std::map<std::string,GameItemType> getReferenceSet() const;

    /**
     * @return instance of GameItemReferenceSet
     */
    GameItemReferenceSet build();

    /// @}
};

#endif /* GameItemReferenceSetBuilder_hpp */

//
//  GameItemReferenceSet.hpp
//  textGame
//
//  Created by Emma on 2/1/17.
//  @author Emma Bobola
//  @date 2/1/17
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameItemReferenceSet_hpp
#define GameItemReferenceSet_hpp

#include <map>
#include "GameItemType.hpp"

/** @class GameItemReferenceSet
 * @brief GameItemReferenceSet contains a const reference for all types of game items
 */

class GameItemReferenceSet {
private:
    /** @name Reference set of GameItems */
    const std::map<std::string, GameItemType> referenceSet;

public:
    /// @{
    /// @name GameItemReferenceSet Constructors and Destructors

    /**
     * @param builder an instance of the GameItemReferenceSetBuilder
     */
    //GameItemReferenceSet(const GameItemReferenceSetBuilder& builder);

    /**
     * @param aReferenceSet a map of references to be assigned to this helper
     */
    GameItemReferenceSet(const std::map<std::string, GameItemType>& aReferenceSet);
    
    /// @}

    GameItemType getItemReference(std::string);
};

#endif /* GameItemReferenceSet_hpp */

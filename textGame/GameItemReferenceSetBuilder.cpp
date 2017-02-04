//
//  GameItemReferenceSetBuilder.cpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameItemReferenceSetBuilder.hpp"

GameItemReferenceSet GameItemReferenceSetBuilder::build() {
    return *new GameItemReferenceSet(referenceSet);
}

std::map<std::string,GameItemType> GameItemReferenceSetBuilder::getReferenceSet() const {
    return referenceSet;
}

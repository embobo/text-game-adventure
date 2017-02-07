//
//  GameItemReferenceSetBuilder.cpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameItemReferenceSetBuilder.hpp"

GameItemReferenceSetBuilder::GameItemReferenceSetBuilder() {
    // build default set of items

    // really hacky right now:
    pointerSet.push_back(new GameItemType("alarm clock","clock",1,0));
    pointerSet.push_back(new GameItemType("bed","bed",0,0));
    pointerSet.push_back(new GameItemType("paper","paper",1,1));
    pointerSet.push_back(new GameItemType("desk","desk",0,0));
    pointerSet.push_back(new GameItemType("stick","twig",1,1));
    pointerSet.push_back(new GameItemType("coffee","coffee",1,1));

    for (int ii = 0; ii < pointerSet.size(); ++ii)
        referenceSet.emplace(pointerSet.at(ii)->getName(), *(pointerSet.at(ii)));

}

GameItemReferenceSetBuilder::~GameItemReferenceSetBuilder() {}

GameItemReferenceSet* GameItemReferenceSetBuilder::build() const {
    return new GameItemReferenceSet(referenceSet);
}

std::map<std::string,GameItemType> GameItemReferenceSetBuilder::getReferenceSet() const {
    return referenceSet;
}

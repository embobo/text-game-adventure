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
    pointerSet.push_back(new GameItemType("alarm clock","clock","",1,0));
    pointerSet.push_back(new GameItemType("bed","bed","",0,0));
    pointerSet.push_back(new GameItemType("paper","paper","",1,1));
    pointerSet.push_back(new GameItemType("desk","desk","",0,0));
    pointerSet.push_back(new GameItemType("stick","twig","",1,1));
    pointerSet.push_back(new GameItemType("coffee","coffee","",1,1));
    pointerSet.push_back(new GameItemType("War and Peace","book","Everyone is sad. It snows. -John Atkinson",1,1));
    pointerSet.push_back(new GameItemType("The Grapes of Wrath","book","Farming sucks. Road trip! Road trip sucks. -John Atkinson",1,1));
    pointerSet.push_back(new GameItemType("Don Quixote","book","Guy attacks windmills. Also he's mad. -John Atkinson",1,1));
    pointerSet.push_back(new GameItemType("The Sun Also Rises","book","Lost generation gets drunk. They're still lost. -John Atkinson",1,1));
    pointerSet.push_back(new GameItemType("Moby Dick","book","Man vs. whale. Whale wins. -John Atkinson",1,1));
    pointerSet.push_back(new GameItemType("Ulysses","book","Dublin, something, something, something, run-on sentence. -John Atkinson",1,1));
    pointerSet.push_back(new GameItemType("The Odyssey","book","War veteran takes forever to get home then kills everyone. -John Atkinson",1,1));
    pointerSet.push_back(new GameItemType("Wuthering Heights","book","A sort-of brother and sister fall in love. It's foggy. -John Atkinson",1,1));

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

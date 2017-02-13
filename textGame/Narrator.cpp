//
//  Narrator.cpp
//  textGame
//
//  Created by Emma on 1/23/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "Narrator.hpp"

const GameItemReferenceSet* Narrator::itemReference = GameItemReferenceSetBuilder().build();

Narrator::Narrator() {

    // set up GameMap
    map = new GameMap();

}

Narrator::~Narrator() {

    
}

void Narrator::reset() {

}

//std::string Narrator::getFeelings() {
//    std::string feelings;
//    // todo
//    return feelings;
//}

std::string Narrator::help() {
    std::string help;
    // add things here
    return help;
}

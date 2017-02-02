//
//  game-narrator.cpp
//  textGame
//
//  Created by Emma on 1/23/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "GameNarrator.hpp"

/* Emotion class  */
Emotion::Emotion(std::string emote, std::string* feelingList, int numFeelings, int start) {
    name = emote;
    base = start;
    intensity = 0;
    feelings = feelingList;
    maxIntensity = numFeelings;
}

void Emotion::feelBetter() {
    if(base + intensity < maxIntensity)
        ++intensity;
}

void Emotion::feelWorse() {
    if(base + intensity > 0)
        --intensity;
}

void Emotion::reset() {
    intensity = base;
}

int Emotion::getIntensity() {
    return intensity;
}

std::string Emotion::getFeeling() {
    return feelings[base + intensity];
}


/* Brain class */

Narrator::Narrator() {
    emotions[0] = new Emotion("certainty",sUncertainty,7,3);
    emotions[1] = new Emotion("tolerance",sTolerance,7,3);
    emotions[2] = new Emotion("interest",sIndifference,7,3);
    emotions[3] = new Emotion("enjoyment",sEnjoyment,7,3);
}

Narrator::~Narrator() {
    delete emotions[0];
    emotions[0] = NULL; // do I need to do this here?
    delete emotions[1];
    emotions[1] = NULL;
    delete emotions[2];
    emotions[2] = NULL;
    delete emotions[3];
    emotions[3] = NULL;
    
}

void Narrator::reset() {
    for(int ii = 0; ii < 4; ++ii){
        emotions[ii]->reset();
    }
}

std::string Narrator::getFeelings() {
    std::string emote = "I feel ";
    for(int ii = 0; ii < 4; ++ii){
        // Todo: fix comma end
        emote = emote + emotions[ii]->getFeeling() + ", ";
    }
    return emote;
}

std::string Narrator::help() {
    std::string help;
    // add things here
    return help;
}






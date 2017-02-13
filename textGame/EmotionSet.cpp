//
//  Emotions.cpp
//  textGame
//
//  Created by Emma on 2/7/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "EmotionSet.hpp"

void EmotionSet::updateEmotion(EmotionType emotion, bool increase) {
    if( increase )
        emotions[emotion].setMorePositive();
    else
        emotions[emotion].setLessPositive();
}

EmotionSet::EmotionSet() {
    emotions = new std::map<EmotionType,Emotion> ();
}

std::string EmotionSet::getFeelingVerb() {
    std::string feeling;
    int certainty = emotions.at(FEAR_TRUST).getEmotionLevel();
    int tolerance = emotions.at(ANGER_ACCEPTANCE).getEmotionLevel();
    int interest = emotions.at(DISGUST_INTEREST).getEmotionLevel();
    int happiness = emotions.at(GRIEF_HAPPINESS).getEmotionLevel();


    return feeling;
}

std::string EmotionSet::getFeelingAdjective() {
    std::string feeling;
    int certainty = emotions.at(FEAR_TRUST).getEmotionLevel();
    int tolerance = emotions.at(ANGER_ACCEPTANCE).getEmotionLevel();
    int interest = emotions.at(DISGUST_INTEREST).getEmotionLevel();
    int happiness = emotions.at(GRIEF_HAPPINESS).getEmotionLevel();


    return feeling;
}


void EmotionSet::moreTrusting() {
    updateEmotion(FEAR_TRUST,true);
}

void EmotionSet::moreFearful() {
    updateEmotion(FEAR_TRUST,false);
}

void EmotionSet::moreAccepting() {
    updateEmotion(ANGER_ACCEPTANCE,true);
}

void EmotionSet::moreAngry() {
    updateEmotion(ANGER_ACCEPTANCE,false);
}

void EmotionSet::moreInterested() {
    updateEmotion(DISGUST_INTEREST,true);
}

void EmotionSet::moreDisgusted() {
    updateEmotion(DISGUST_INTEREST,false);
}

void EmotionSet::moreHappy() {
    updateEmotion(GRIEF_HAPPINESS,true);
}

void EmotionSet::moreSad() {
    updateEmotion(GRIEF_HAPPINESS,false);
}

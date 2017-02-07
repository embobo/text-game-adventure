//
//  Emotion.cpp
//  textGame
//
//  Created by Emma on 2/7/17.
//  @author Emma Bobola
//  @date 2/7/17
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "Emotion.hpp"

Emotion::Emotion() {
    init();
}

void Emotion::addEmoteToMap(const EmotionLevel& aLevel,
                            const std::string& aFeelingVerb,
                            const std::string& aFeelingAdjective) {
    emoteVerbMap.emplace(aLevel,aFeelingVerb);
    emoteAdjectiveMap.emplace(aLevel,aFeelingAdjective);
}

void Emotion::changeLevel(bool increase) {

    switch (level) {
        case EmotionLevel::VERY_NEGATIVE:
            if(increase)
                level = PRETTY_NEGATIVE;
            break;

        case EmotionLevel::PRETTY_NEGATIVE:
            if(increase)
                level = LITTLE_NEGATIVE;
            else
                level = VERY_NEGATIVE;
            break;

        case LITTLE_NEGATIVE:
            if(increase)
                level = NEUTRAL;
            else
                level = PRETTY_NEGATIVE;
            break;

        case NEUTRAL:
            if(increase)
                level = LITTLE_POSITIVE;
            else
                level = LITTLE_NEGATIVE;
            break;

        case LITTLE_POSITIVE:
            if(increase)
                level = PRETTY_POSITIVE;
            else
                level = NEUTRAL;
            break;

        case PRETTY_POSITIVE:
            if(increase)
                level = VERY_POSITIVE;
            else
                level = LITTLE_POSITIVE;
            break;

        case VERY_POSITIVE:
            if(!increase)
                level = PRETTY_POSITIVE;
            break;
            
        default:
            break;
    }
}

int Emotion::getEmotionLevel() {
    switch (level) {
        case EmotionLevel::VERY_NEGATIVE:
            return 0;
            break;

        case EmotionLevel::PRETTY_NEGATIVE:
            return 1;
            break;

        case EmotionLevel::LITTLE_NEGATIVE:
            return 2;
            break;

        case EmotionLevel::NEUTRAL:
            return 3;
            break;

        case EmotionLevel::LITTLE_POSITIVE:
            return 4;
            break;

        case EmotionLevel::PRETTY_POSITIVE:
            return 5;
            break;

        case EmotionLevel::VERY_POSITIVE:
            return 6;
            break;
            
        default:
            return -1;
            break;
    }
}

std::string Emotion::getEmotionVerb() {
    return emoteVerbMap[level];
}

std::string Emotion::getEmotionAdjective() {
    return emoteAdjectiveMap[level];
}

void Emotion::setMorePositive() {

}


void Emotion::setLessPositive() {

}


void Emotion::reset() {

}

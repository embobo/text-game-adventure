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
    changeLevel(true);
}


void Emotion::setLessPositive() {
    changeLevel(false);
}


void Emotion::reset() {
    level = NEUTRAL;
}




void FearTrust::init() {

    addEmoteToMap(VERY_NEGATIVE, "terrified", "frightening");
    addEmoteToMap(PRETTY_NEGATIVE, "scared", "scary");
    addEmoteToMap(LITTLE_NEGATIVE, "cautious", "concerning");
    addEmoteToMap(NEUTRAL, "wary", "");
    addEmoteToMap(LITTLE_POSITIVE, "assured", "convincing");
    addEmoteToMap(PRETTY_POSITIVE, "confident", "reliable");
    addEmoteToMap(VERY_POSITIVE, "trusting", "trust-worthy");
}

FearTrust::FearTrust() {
    init();
}

void AngerAcceptance::init() {

    addEmoteToMap(VERY_NEGATIVE, "angry", "enraging");
    addEmoteToMap(PRETTY_NEGATIVE, "frustrated", "frustrating");
    addEmoteToMap(LITTLE_NEGATIVE, "annoyed", "annoying");
    addEmoteToMap(NEUTRAL, "tolerant", "tolerable");
    addEmoteToMap(LITTLE_POSITIVE, "allowing", "agreeable");
    addEmoteToMap(PRETTY_POSITIVE, "accepting", "satisfactory");
    addEmoteToMap(VERY_POSITIVE, "understanding", "understandable");

}

AngerAcceptance::AngerAcceptance() {
    init();
}

void DisgustInterest::init() {

    addEmoteToMap(VERY_NEGATIVE, "repulsed", "repulsive");
    addEmoteToMap(PRETTY_NEGATIVE, "disgusted", "disgusting");
    addEmoteToMap(LITTLE_NEGATIVE, "bored", "boring");
    addEmoteToMap(NEUTRAL, "indifferent", "");
    addEmoteToMap(LITTLE_POSITIVE, "curious", "curious");
    addEmoteToMap(PRETTY_POSITIVE, "interested", "interesting");
    addEmoteToMap(VERY_POSITIVE, "fascinated", "fascinating");

}

DisgustInterest::DisgustInterest() {
    init();
}

void GriefHappiness::init() {

    addEmoteToMap(VERY_NEGATIVE, "melancholy", "existentially depressing");
    addEmoteToMap(PRETTY_NEGATIVE, "grieved", "grevious");
    addEmoteToMap(LITTLE_NEGATIVE, "sad", "depressing");
    addEmoteToMap(NEUTRAL, "content", "acceptable");
    addEmoteToMap(LITTLE_POSITIVE, "amused", "amusing");
    addEmoteToMap(PRETTY_POSITIVE, "happy", "enjoyable");
    addEmoteToMap(VERY_POSITIVE, "ecstatic", "exciting");
}

GriefHappiness::GriefHappiness() {
    init();
}

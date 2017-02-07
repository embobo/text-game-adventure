//
//  EmotionSet.hpp
//  textGame
//
//  Created by Emma on 2/7/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef EmotionSet_hpp
#define EmotionSet_hpp

#include <string>
#include "EmotionTypes.hpp"

class Emotion {
private:
    std::string name;
    std::string* feelings;
    int base;
    int intensity;
    int maxIntensity;
public:
    Emotion(std::string emote, std::string* feelingList, int numFeelings, int start);
    void feelBetter();
    void feelWorse();
    void reset();
    int getIntensity();
    std::string getFeeling();
};

#endif /* EmotionSet_hpp */

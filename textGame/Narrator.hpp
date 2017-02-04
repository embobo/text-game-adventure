//
//  Narrator.hpp
//  textGame
//
//  Created by Emma on 1/23/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef Narrator_hpp
#define Narrator_hpp
#include "GameItemReferenceSetBuilder.hpp"
#include "MapLayout.hpp"


// Map endings into coordinate space and manipulate player coordinate based on emotions?

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

class Narrator {
private:
    // Todo: move these to config file and read in
    std::string sUncertainty[7] =
    {   "terrified",
        "fearful",
        "cautious",
        "uncertain",
        "assured",
        "confident",
        "understanding"
    };
    std::string sTolerance[7] =
    {   "angry",
        "frustrated",
        "enduring",
        "tolerant",
        "acknowledge",
        "accepting",
        "believing"
    };
    std::string sIndifference[7]=
    {   "repulsed",
        "disgusted",
        "bored",
        "indifferent",
        "curious",
        "interested",
        "absorbed"
    };
    std::string sEnjoyment[7]=
    {   "grieved",
        "sad",
        "blue",
        "okay",
        "amused",
        "happy",
        "ecstatic"
    };
    Emotion* emotions[4];

    /** Reference to GameItemTypes */
    static const GameItemReferenceSet itemReference;
    //GameMap* map;
public:
    Narrator();
    ~Narrator();
    void reset();
    std::string getFeelings();
    std::string help();
};


#endif /* Narrator_hpp */

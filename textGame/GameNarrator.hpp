//
//  game-narrator.hpp
//  textGame
//
//  Created by Emma on 1/23/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef game_narrator_hpp
#define game_narrator_hpp

#include "game-area.hpp"
#define MAPWIDTH 10
#define MAPHEIGHT 10

using namespace std;

// Map endings into coordinate space and manipulate player coordinate based on emotions?

class Emotion {
private:
    string name;
    string* feelings;
    int base;
    int intensity;
    int maxIntensity;
public:
    Emotion(string emote, string* feelingList, int numFeelings, int start);
    void feelBetter();
    void feelWorse();
    void reset();
    int getIntensity();
    string getFeeling();
};

class Narrator {
private:
    // Todo: move these to config file and read in
    string sUncertainty[7] =
    {   "terrified",
        "fearful",
        "cautious",
        "uncertain",
        "assured",
        "confident",
        "understanding"
    };
    string sTolerance[7] =
    {   "angry",
        "frustrated",
        "enduring",
        "tolerant",
        "acknowledge",
        "accepting",
        "believing"
    };
    string sIndifference[7]=
    {   "repulsed",
        "disgusted",
        "bored",
        "indifferent",
        "curious",
        "interested",
        "absorbed"
    };
    string sEnjoyment[7]=
    {   "grieved",
        "sad",
        "blue",
        "okay",
        "amused",
        "happy",
        "ecstatic"
    };
    Emotion* emotions[4];
    //GameMap* map;
public:
    Narrator();
    ~Narrator();
    void Reset();
    string GetFeelings();
    string Help();
};


#endif /* game_narrator_hpp */

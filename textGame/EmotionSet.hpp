//
//  EmotionSet.hpp
//  textGame
//
//  Created by Emma on 2/7/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef EmotionSet_hpp
#define EmotionSet_hpp

#include "Emotion.hpp"

/**
 * @class EmotionSet
 * @brief a class to track and parse emotional feeling
 */

class EmotionSet {
private:
    /** @enum EmotionType used in EmotionSet to index Emotions */
    enum EmotionType {
        FEAR_TRUST,
        ANGER_ACCEPTANCE,
        DISGUST_INTEREST,
        GRIEF_HAPPINESS
    };

    /** emotion map */
    std::map<EmotionType,Emotion>* emotions;

    /** int emotion levels */
    

    /**
     * update an emotion more or less positive
     */
    void updateEmotion(EmotionType emotion, bool increase);

    /**
     * get strongest emotions
     */
    

public:
    /// @{
    /// @name EmotionSet Constructors and Destructors

    /**
     * Default constructor
     */
    EmotionSet();

    /// @}


    /// @{
    /// @name Public methods for EmotionSet

    /**
     * get overall feeling from this emotion set as a verb
     * @return string representation of the emotion (infinitive verb)
     */
    std::string getFeelingVerb();

    /**
     * get overall feeling from this emotion set as an edjective
     * @return string representation of the emotion (adjective)
     */
    std::string getFeelingAdjective();

    /**
     * increase certainty
     */
    void moreTrusting();

    /**
     * decrease certainty
     */
    void moreFearful();

    /**
     * increase tolerance
     */
    void moreAccepting();

    /**
     * decrease tolerance
     */
    void moreAngry();

    /**
     * increase interest
     */
    void moreInterested();

    /**
     * decrease interest
     */
    void moreDisgusted();

    /**
     * increase happiness
     */
    void moreHappy();

    /**
     * decrease happiness
     */
    void moreSad();

    /// @}
};

#endif /* EmotionSet_hpp */

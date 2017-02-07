//
//  EmotionTypes.hpp
//  textGame
//
//  Created by Emma on 2/7/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef EmotionTypes_hpp
#define EmotionTypes_hpp

#include <string>
#include <map>

/**
 * @class Emotion
 * @brief class representing a particular emotion set and the intensity level of that emotion
 */
class Emotion {
protected:
    /** @enum emotion levels */
    enum EmotionLevel {
        VERY_NEGATIVE,
        PRETTY_NEGATIVE,
        LITTLE_NEGATIVE,
        NEUTRAL,
        LITTLE_POSITIVE,
        PRETTY_POSITIVE,
        VERY_POSITIVE
    };

    /** current level of this emotion */
    EmotionLevel level;
    /** max level of this emotion */
    EmotionLevel maxLevel;
    /** map of emotion levels to verb string representations */
    std::map<EmotionLevel,std::string> emoteVerbMap;
    /** map of emotion levels to adjective string representations */
    std::map<EmotionLevel,std::string> emoteAdjectiveMap;

    /**
     * init function to call in constructor
     */
    virtual void init() = 0;

    /**
     * function to add an emotionlevel to the emoteMap
     * @param aLevel the level the string representation will correspond to
     * @param aFeelingVerb the string of the feeling (infinitive verb)
     * @param aFeelingAdjective the string of the feeling (adjective)
     */
    void addEmoteToMap(const EmotionLevel& aLevel,
                       const std::string& aFeelingVerb,
                       const std::string& aFeelingAdjective);
    /**
     * changes the emotional level
     * @increase bool indicating increase positive if true, else decrease
     */
    void changeLevel(bool increase);

public:
    /// @{
    /// @name Emotion constructors and destructors

    /**
     * Default constructor, constructs emotion map
     */
    Emotion();

    /// @}

    /// @{
    /// @name Emotion getters and setters

    /**
     * get the emotion level as a number
     * @return integer representation of the emotional level
     * @note should probably make this a float between 0 and 1
     */
    int getEmotionLevel();

    /**
     * get the emotion as a verb
     * @return the emotion in infinitive verb tense
     */
    std::string getEmotionVerb();

    /**
     * get the emotion as a verb
     * @return the emotion as an adjective
     */
    std::string getEmotionAdjective();

    /**
     * increase the emotional level by 1
     */
    void setMorePositive();

    /**
     * decrease the emotional level by 1
     */
    void setLessPositive();

    /**
     * set emotional level to neutral
     */
    void reset();

    /// @}
};

/**
 * @class Certainty
 * @brief class which contains the level of trust
 */
class Certainty : Emotion {
protected:
    void init();
};

/** @enum emotion levels for terror -> understanding */
enum EmotionsCertainty {
    TERROR,
    FEAR,
    CAUTION,
    UNCERTAIN,
    ASSURANCE,
    CONFIDENCE,
    UNDERSTANDING };

/** @enum emotion levels for anger -> trust */
enum EmotionsTolerance {
    ANGER,
    FRUSTRATION,
    ENDURANCE,
    TOLERANCE,
    ACKNOWLEDGEMENT,
    ACCEPTANCE,
    TRUST };

/** @enum emotion levels for repulsion -> obsession */
enum EmotionsInterest {
    REPULSION,
    DISGUST,
    BOREDOM,
    INDIFFERENCE,
    CURIOSITY,
    INTEREST,
    OBSESSION
};

/** @enum emotion levels for grief -> ecstasy */
enum EmotionsHappiness {
    GRIEF,
    SADNESS,
    MELANCHOLY,
    CONTENT,
    AMUSED,
    HAPPY,
    ECSTASY
};

#endif /* EmotionTypes_hpp */

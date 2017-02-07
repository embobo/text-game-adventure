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
     * get overall feeling from this emotion set
     * @return string representation of the emotion (infinitive verb)
     */
    std::string getFeeling();

    /**
     * increase certainty
     */
    void moreCertain();

    /**
     * decrease certainty
     */
    void lessCertain();

    /**
     * increase tolerance
     */
    void moreTolerant();

    /**
     * decrease tolerance
     */
    void lessTolerant();

    /**
     * increase interest
     */
    void moreInterested();

    /**
     * decrease interest
     */
    void lessInterested();

    /**
     * increase happiness
     */
    void moreHappy();

    /**
     * decrease happiness
     */
    void lessHappy();

    /// @}
};

#endif /* EmotionSet_hpp */

//
//  EmotionTypes.hpp
//  textGame
//
//  Created by Emma on 2/7/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef EmotionTypes_hpp
#define EmotionTypes_hpp

/** @enum emotion levels for terror -> understanding */
enum EmotionsCertainty { TERROR,
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

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
//#include "GameItemReferenceSetBuilder.hpp"
#include <iostream>
#include "GameMap.hpp"


/**
 * @class Narrator
 * this class runs the game
 */

class Narrator {
private:
    static const std::string introPrompt;
    static const std::string helpPrompt;
    static const std::string endPrompt;
    static const std::string userPrompt;
    GameMap* map;
    enum ProgressState { INIT, STARTED, VALID, DEAD, QUIT };
    ProgressState game_state;
    //std::map<std::string, void* (*) (void*)> optionMap;

    std::string thisTilePrompt() const;

    void runInit();
    void runStart();
    void runValid();
    void runDead();
    void runGame();
    void nextNode(const int& nodeIndex);
    std::string readHelp() const;
    std::string yesNoOptions(const std::string& yes, const std::string& no);
    std::pair<std::string,int> enumerateOptions(std::list<std::string> options) const;
    void resetNarrator();
    
public:
    /// @{
    /// @name Narrator Constructors and Destructors

    /**
     * Default constructor
     */
    Narrator();

    /**
     * Destructor
     */
    ~Narrator();

    /// @}

    /// @{
    /// @name Narrator public methods

    /**
     * main game loop
     */
    void gameLoop();


    /// @}
};


#endif /* Narrator_hpp */

//
//  Narrator.cpp
//  textGame
//
//  Created by Emma on 1/23/17.
//  @author Emma Bobola
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "Narrator.hpp"

const std::string Narrator::introPrompt = "Welcome to Trial and Error! Are you ready to begin?\n";
const std::string Narrator::helpPrompt = "Type the number the the left of the choice you want to make.";
const std::string Narrator::endPrompt = "\n\nThe End.\n CREDIT:\nShort Descriptions by John Atkinson . wronghands1.com\n\n";
const std::string Narrator::userPrompt = ">>> ";

Narrator::Narrator() : game_state(INIT) {
    // set up GameMap
    map = new GameMap();
}

Narrator::~Narrator() {
    delete map;
    map = NULL;
}

void Narrator::nextNode(const int& nodeIndex) {
    map->moveNode(nodeIndex);
}

void Narrator::gameLoop() {
    while(game_state != QUIT) {
        runGame();
    }
    std::cout << "Thanks for playing!\n";
    exit(0);
}

void Narrator::runGame() {
    std::cout << "\n";
    switch (game_state) {
        case INIT:
            runInit();
            break;
        case STARTED:
            runStart();
            break;
        case VALID:
            runValid();
            break;
        case DEAD:
            runDead();
            break;
        case QUIT:
            break;
        default:
            throw DescriptiveException("Unknown game state");
    }
}

std::string Narrator::readHelp() const {
    return helpPrompt;
}

std::string Narrator::thisTilePrompt() const {
    return "\n\n\n\n\n\n~~~YOU HAVE ENTERED A PREDICAMENT~~~\n"
    + (map->getCurrentNode())->getTileName()
    + "\n - "
    + (map->getCurrentNode())->getTileShortDescription()
    + "\n\n ..."
    + (map->getCurrentNode())->getTileLongDescription()
    + "...\n\n";
}

void Narrator::runInit() {
    std::string input;
    std::cout << introPrompt;
    std::cout << yesNoOptions("START", "NEVERMIND");
    std::cin >> input;
    if(input == "y")
        game_state = STARTED;
    else
        game_state = QUIT;
    return;
}


void Narrator::runStart() {
    int choice;
    std::pair<std::string, int> options;
    std::string prompt = thisTilePrompt();

    std::cout << prompt;
    options = enumerateOptions((map->getCurrentNode())->readConnectedTiles());
    std::cout << "Where would you like to go?\n" + options.first + "\n" + userPrompt;
    do {
        std::cin >> choice;
    } while(choice > options.second || choice < 0);
    nextNode(choice);
    if((map->getCurrentNode())->getTileType() == tileTypes::VOID)
        game_state = DEAD;
    else
        game_state = VALID;
}

void Narrator::runValid() {
    std::cout << "\n\n\n\n\n\n~~~GOOD CHOICE! MOVING ON.~~~\n..." + map->getLastNode().getTileLesson() + "\n\n";
    runStart();
}

void Narrator::runDead() {
    std::cout << "~~~YOU HAVE DESPAIRED.~~~\n..." + map->getLastNode().getTileEnding() + endPrompt;
    resetNarrator();
    game_state = INIT;
}

std::string Narrator::yesNoOptions(const std::string& yes,
                                   const std::string& no) {
    return "(y) " + yes + "\n(n) " + no + "\n" + userPrompt;
}

std::pair<std::string,int> Narrator::enumerateOptions(std::list<std::string> options) const {
    std::string output = "";
    int index = 0;
    for(auto it = options.cbegin(); it != options.cend(); ++it) {
        output = output + "(" + std::to_string(index) + ") " + (*it) + "\n";
        ++index;
    }
    return std::make_pair(output, index - 1);
}

void Narrator::resetNarrator() {
    map->resetMap();
    game_state = INIT;
}

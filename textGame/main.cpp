//
//  main.cpp
//  textGame
//
//  Created by Emma on 1/19/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//
#include "game-narrator.hpp"

using namespace std;

class NewGame {
private:
    const string startPrompt = "Game Start\n";
    string userIn;
    string gameOut = "N/A\n";
};

string START = "Game Start\n";
string badPrompts[4] = {
    "huh?",
    "growl",
    "okayyy",
    "nothing matters"
};
string goodPrompts[4] = {
    "yeah!",
    "ohmmm",
    "I care!",
    "It's okay"
};
string userIn;
string gameOut = "N/A\n";

int
parse_input(void) {
    gameOut = "received input\n";
    if (userIn == "exit")
        return 0;
    return 1;
}

int
game_loop() {
    cout << gameOut;
    cout << "> ";
    getline(cin, userIn);
    return parse_input();
}

GameLocation* bedroom = new GameLocation("bedroom");
GameLocation* work = new GameLocation("work");
GameItem* alarmClock = new GameItem("alarm clock", true, bedroom);
GameItem* bed = new GameItem("bed", false, bedroom);
GameItem* stapler = new GameItem("stapler", true, work);
GameMapNode* testNode = new GameMapNode(bedroom);

int main(int argc, const char * argv[]) {
    string test = testNode->GetLocationName();
    cout << test;
    while (game_loop()) { }
    return 0;
}

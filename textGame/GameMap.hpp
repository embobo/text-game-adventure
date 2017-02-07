//
//  GameMap.hpp
//  textGame
//
//  Created by Emma on 2/6/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameMap_hpp
#define GameMap_hpp

#include "GameTileNode.hpp"

#endif /* GameMap_hpp */

class GameMap {
private:
    /** all nodes in gameMap. Used to keep track of what needs to be deleted */
    std::map<std::string,GameTileNode*> tileNodes;

    /** node from which the game starts */
    GameTileNode* startNode;
    /** node currently placed at */
    GameTileNode* currentNode;

    void createGameMap();

    void connectNodes(GameTileNode* tile1,
                      GameTileNode* tile2);

public:
    /// @{
    /// @name GameMap Constructors and Destructors

    /**
     * Default Constructor. Constructs a small game map
     */
    GameMap();

    /**
     * Destructor
     */
    ~GameMap();

    /// @}


    /// @{
    /// @name GameMap getters and public methods

    /**
     * a function for reading and modifying the current game map node
     * @return a constant pointer to the current node
     */
    GameTileNode* getCurrentNode() const;


    /**
     * a function for setting the current node back to the start node
     */
    void reset();

    /// @}
};

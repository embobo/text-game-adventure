//
//  GameMap.hpp
//  textGame
//
//  Created by Emma on 2/6/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameMap_hpp
#define GameMap_hpp

#include "GameTileBuilder.hpp"

#endif /* GameMap_hpp */

class GameMap {
private:
    /** static const pointer to const GameTile representing all VOID tiles */
    GameTile* const voidTile;
    static const int MAP_WIDTH = 10;
    static const int MAP_HEIGHT = 10;
    /** all nodes in gameMap. Used to keep track of what needs to be deleted */
    std::map<std::string,GameTile*> tileNodes;

    /** node from which the game starts */
    GameTile* startNode;
    /** node currently placed at */
    GameTile* currentNode;

    /** game map defaults to 10x10 */
    GameTile* const gameMap[MAP_WIDTH][MAP_HEIGHT];

    void createGameMap();

    void connectNodes(GameTile* tile1,
                      GameTile* tile2);

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
    GameTile* getCurrentNode() const;


    /**
     * a function for setting the current node back to the start node
     */
    void reset();

    /// @}
};

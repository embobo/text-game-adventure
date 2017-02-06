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
    std::map<std::string,GameTileNode*> tileNodes;
    
    GameTileNode* startNode;
    GameTileNode* currentNode;

    void createGameMap();

    void connectNodes(GameTileNode* tile1,
                      TileDirectionsCardinal direction1,
                      GameTileNode* tile2,
                      TileDirectionsCardinal direction2);
public:
    /// @{
    /// @name GameMap Constructors and Destructors

    /**
     * Default Constructor
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

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
#include "DefaultTiles.hpp"

#endif /* GameMap_hpp */

class GameMap {
private:
    /** all nodes in gameMap. Used to keep track of what needs to be deleted */
    std::vector<GameTile*> tileNodes;

    /** node from which the game starts */
    GameTile* startNode;
    /** previously visited node */
    GameTile* lastNode;
    /** node currently placed at */
    GameTile* currentNode;

    /** game map defaults to 10x10 */

    void createGameMap();

    void createGenericTile(const std::string& name,
                           const std::string& shortDescription,
                           const std::string& longDescription,
                           const std::string& lesson,
                           const std::string& ending);

    void connectTiles(const int& index1, const int& index2);

    void createAndConnectVoidTile();

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
     * @return a const pointer to the current node
     */
    GameTile* getCurrentNode() const;

    /**
     * a function for reading the last game map node
     * @return a const constrolled last node
     */
    GameTile getLastNode() const;

    /**
     * move to a desired node
     * @param nodeIndex int value of the index of the node desired
     * @return bool value true indicating game still valid (not a void tile)
     */
    bool moveNode(const int& nodeIndex);

    /**
     * a function for setting the current node back to the start node
     */
    void resetMap();

    /// @}
};

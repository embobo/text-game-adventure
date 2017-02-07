//
//  GameTileNode.hpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameTileNode_hpp
#define GameTileNode_hpp

#include "GameTileBuilder.hpp"
#include "TileDirections.hpp"

/**
 * @class GameTileNode contains this tile and navigation to other tiles
 */

class GameTileNode {
private:
    /** a void tile to use in default constructor */
    static GameTile* voidTile;
    /** this node's tile */
    GameTile* here;
    /** this node's item set */
    GameItemContainer* items;
    /** the connected nodes to this tile */
    std::map<std::string,GameTileNode> connectedNodes;
    
public:
    /// @{
    /// @name GameTileNode Constructors and Destructors

    /**
     * default constructor constructs a void tile given no tile
     */
    GameTileNode();

    /**
     * @param aTile the "here" tile for this node
     */
    GameTileNode(GameTile* const aTile);

    /**
     *
     */
    ~GameTileNode();

    /// @}


    /// @{
    /// @name GameTileNode methods

    /**
     * @return a constant pointer to the game tile at this node
     */
    GameTile* getTile() const;

    /**
     * @return a constant pointer to the item container at this node
     */
    GameItemContainer* getItems() const;

    /**
     * @return a list of the names of nodes attached to this node
     */
    std::list<std::string> getConnectedNodesList();

    /**
     * @param node the name of the node to retrieve
     * @return Node in the direction desired
     */
    GameTileNode getConnectedNode(std::string node) const;

    /**
     * @param node the name of the node to connect
     * @param tileNode node to add to the direction desired
     */
    void setConnectedNode(std::string node, const GameTileNode tileNode);

    /// @}
};

#endif /* GameTileNode_hpp */

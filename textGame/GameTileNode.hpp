//
//  GameTileNode.hpp
//  textGame
//
//  Created by Emma on 2/4/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#ifndef GameTileNode_hpp
#define GameTileNode_hpp

#include "GameTile.hpp"
#include "TileDirections.hpp"

/**
 * @class GameTileNode contains this tile and navigation to other tiles
 */

class GameTileNode {
private:
    /** a void tile to use in default constructor */
    static GameTile* voidTile;
    /** this node's tile */
    GameTile const here;
    /** this node's item set */
    GameItemContainer* items;
    /** the connected nodes to this tile */
    std::map<TileDirectionsCardinal,GameTileNode> connectedNodes;
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
    GameTileNode(const GameTile& aTile);

    /**
     *
     */
    ~GameTileNode();

    /// @}


    /// @{
    /// @name GameTileNode methods

    /**
     * @return the game tile at this node
     */
    GameTile getTile();

    /**
     * @return the item container at this node
     */
    GameItemContainer getItems();

    /**
     * @param direction the TileDirectionCardinal direction for node to retrieve
     * @return Node in the direction desired
     */
    GameTileNode getConnectedNode(TileDirectionsCardinal direction) const;

    /**
     * @param direction the TileDirectionCardinal direction for node to retrieve
     * @param tileNode node address to add to the direction desired
     */
    void setConnectedNode(TileDirectionsCardinal direction, const GameTileNode tileNode);

    /// @}
};

#endif /* GameTileNode_hpp */

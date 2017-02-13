//
//  DefaultTiles.cpp
//  textGame
//
//  Created by Emma on 2/13/17.
//  Copyright © 2017 Emma Bobola. All rights reserved.
//

#include "DefaultTiles.hpp"

/*

 1
 1
 Everyone is sad. It snows.
 It is snowing. You are searching for the meaning of life by throwing yourself into the world, and in doing so, risking all that you have.
 You fall in love with beauty. Magnificent, shining, brown-eyed beauty. It's a bear. You love with the glossy fur and soft eyes. You believe your obsessive flirtations will be returned because you have given the bear many compliments. You tie yourself to the bear in a fit of rage over your unrequited love. Sadly for you, bears do not like to be tied to infatuated humans. The bear jumps into a river. The bear can swim. You cannot.
 */

const std::array<TileValues,5> DefaultTileHelper::defaults = {
    TileValues("War and Peace",
               "Everyone is sad. It snows.",
               "It is snowing a lot. There are bears. You are searching for the meaning of life. You kind of want a bear.",
               "You leave the bears alone and watch them from a safe distance. You enjoy their furry beauty and live your own life.",
               "You fall in love with beauty. Magnificent, shining, brown-eyed beauty. It's a bear. You are infatuated with a bear. You obsess over the glossy fur and soft eyes. You believe your obsessive flirtations will be returned because you have given the bear many compliments. You tie yourself to the bear in a fit of rage over your unrequited love. Sadly for you, bears do not like to be tied to infatuated humans. The bear jumps into a river. The bear can swim. You cannot."),
    TileValues("Don Quixote",
               "Guy attacks windmills. Also, he's mad.",
               "There are a lot of windmills in here. You are told you must bring glory to the land and its windmills but your morals tell you those expectations are not very meaningful.",
               "You build your own windmills, with blackjack and hookers. You actually forget the windmill and just hang out with Magic Mike.",
               "You become a brony, telling yourself that dedication to a universe of friendship will elevate your worth and enable you to impress all of the windmills. On your way to a brony convention, you see ponies on the horizon. Your new adventure awaits! As you get closer to the pony silhouettes you realize that they are not actually ponies. They are a mob of toddler age girls wearing Spartan helmets and wielding hammers, horse shoes, and brands. They jump you and nail the horse shoes to you and brand you. You are branded 'Friendship' and sent to the glue factory where you are turned into 'Magic' brand glue."),
    TileValues("Moby Dick",
               "Man vs. Whale. Whale wins.",
               "There are a lot of fortune tellers in this room. They all swear a lot and seem to have a problem with object permanence.",
               "You ignore the fortune tellers and do whatever you want.",
               "A fortune teller informs you that you are a baby. You don't realize it but you have reverted back to being a baby. You still go to work. You are picked up by your carpool and dropped off at your desk every business day. People play peek-a-boo with you all day and open and close the same documents over and over. Sitting at your computer, chubby legs hanging off the chair, you watch things appear and disappear forever. You are stuck in an endless loop forever."),
    TileValues("Beowulf",
               "Hero kills monster. Blah, blah, blah, blah. Dragon kills hero.",
               "This room is full of dogs. They all look at you expectantly.",
               "You go to the store and buy dog food and leashes, then take all the dogs on a walk. They are all happy and give you many dog kisses.",
               "You buy more dogs. You fill the room with dogs. They are annoyed. You have given them many friends but no walkies. You decide to bring them a very big squirrel to appease them and win dog glory. The squirrel thinks you are a nut and eats you."),
    TileValues("Walden",
               "Man sits outside for two years. Nothing happens.",
               "There is nothing in here. There is, however, a very loud bubbling noise.",
               "You find the bubbling noise and discover a fountain of wine. It is very nice to drink and over many months you realize this room is very peaceful. There are many animal friends and many things to eat. You like to sit near the water.",
               "You are irritated with the bubbling and find the source. It is a reddish fountain of something. You plug the fountain to stop the sound. You decide this place needs a touch of something so you build a train through the middle, on top of where the fountain had been. You build a city around the train stop and work in the convenience store. No one comes to the train stop because they are too busy going to other train stops. Your store goes out of business and there is no food or drink. You starve.")
};

const std::array<std::pair<int, int>,10> DefaultTileHelper::connects = {
    std::make_pair(0, 1),
    std::make_pair(0, 2),
    std::make_pair(0, 3),
    std::make_pair(0, 4),
    std::make_pair(1, 2),
    std::make_pair(1, 3),
    std::make_pair(1, 4),
    std::make_pair(2, 3),
    std::make_pair(2, 4),
    std::make_pair(3, 4),
};

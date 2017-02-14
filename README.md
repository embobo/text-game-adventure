# Trial and Error #

Trial and Error is a text based adventure game where the player finds themself in a literary conundrum.

## To Play ##

Each prompt shows options that can be selected with a character shown in parentheses.

To make a choice, type the character shown.

> Example:
> ```
> Welcome to Trial and Error! Are you ready to begin?
> (y) START
> (n) NEVERMIND
> 
> >>> y 
> ```
> This is the starting prompt for the game, the player is prompted with choices. Here `START` is selected by typing `y` after the `>>>` prompt.

## To Run ##

The executable file is located in the build directory and can be run with

```bash
$ ./build/textGame
```

## To Build ##

To build the program manually use g++

```bash
$ cd textGame
$
$ g++ -otextGame.o main.cpp \
		DefaultTiles.cpp \
		GameItemContainer.cpp \
		GameItemReferenceSetBuilder.cpp \
		GameMap.cpp \
		GameTileBuilder.cpp \
		GameItemReferenceSet.cpp \
		GameItemType.cpp \
		GameTile.cpp \
		Narrator.cpp \
	-std=c++11
```

This will produce an executable titled `textGame.o`
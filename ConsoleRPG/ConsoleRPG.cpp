// ConsoleRPG.cpp : Defines the entry point for the console application.
//

#include "Game.h"


int main()
{
	srand(time(NULL));

	Game game;

	while (game.getPlaying())
	{
		game.mainMenu();
	}

    return 0;
}


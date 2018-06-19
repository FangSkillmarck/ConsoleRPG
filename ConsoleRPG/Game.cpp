
#include "stdafx.h"
#include"Game.h"


Game::Game()
{
	choice = 0;
	playing = true;
}


Game::~Game()
{
}

//Functions
void Game::mainMenu() 
{
	cout << "Main Menu" << endl;
	cout << "0: Quit" << endl;
	cout << "1: Travel" << endl;
	cout << "2: Shop" << endl;
	cout << "3: Level up" << endl;
	cout << "4: rest" << endl;

	cout << endl << "choice :";
	cin >> choice;

	switch (choice)
	{
	case 0:
		playing = false;
		break;
	default:
		break;
	}
}

#pragma once

#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include"Functions.h"

using namespace std;

class Game
{
public:
	Game();
	virtual ~Game();

	//Operators for overloading

	//Functions
	void mainMenu();

	//Accessors
	bool getPlaying() const { return this->playing; }

	//Modifiers



private:
	int choice;
	bool playing;
};


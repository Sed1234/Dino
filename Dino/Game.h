#pragma once
#include "Dino.h"
#include "Ground.h"
#include "Cactus.h"
class Game
{
	Dino dino;
	Ground ground;
	Cactus cactus;
	bool isActive;
	short width, height;
	Game();
public:
    int points = 0;
	static Game & getInstance();
	void play();
	bool checkIfDinoCrushes();
	bool checkIfDinoSettles();
	bool checkIfDinoPassed();
	~Game();
};

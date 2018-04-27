#pragma once
#include "Pixel.h"
#include <vector>
class Dino
{
	char sign;
public:
	std::vector<Pixel> body;
	bool isJumping;
	Dino();
	~Dino();
	void draw();
	void jump();
	void settle();
};


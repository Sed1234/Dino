#pragma once
#include "Pixel.h"
#include <vector>
class Cactus
{
	char sign;

public:
	std::vector<Pixel> body;
	void draw();
	void move();
	Cactus();
	~Cactus();
};

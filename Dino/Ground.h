#pragma once
#include "Pixel.h"
#include <vector>
class Ground
{
	char sign;
public:
	std::vector<Pixel> body;
	Ground();
	~Ground();
	void draw();
};

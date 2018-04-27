#include "Ground.h"



Ground::Ground()
{
	sign = '=';
	for (int i = 1; i < 50; ++i) {
		body.push_back(Pixel(i, 15));
	}
}


Ground::~Ground()
{
}

void Ground::draw()
{
	for (Pixel & pixel : body)
	{
		pixel.draw(sign);
	}
}

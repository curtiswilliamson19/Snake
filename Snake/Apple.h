#pragma once
#include "SDL.h"
#include "Snake.h"
#include <vector>

class Apple
{
public:

	Apple(SDL_Rect position)
	{
		this->position = position;
	}

	//getters
	SDL_Rect getPosition()
	{
		return position;
	}

	//setters
	void setPosition(int x, int y)
	{
		this->position.x = x;
		this->position.y = y;
	}

private:
	SDL_Rect position;
};

//functions
void createApples(std::vector<Apple*>& apples);

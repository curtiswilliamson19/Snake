#pragma once
#include "SDL.h"
#include <vector>
#include <deque>
#include "Direction.h"

class Snake
{
public:

	Snake()
	{
		direction = 0;
		size = 1;
		highScore = 0;
		count = 1;
	}

	//getters
	SDL_Rect getHead()
	{
		return head;
	}

	int getSize()
	{
		return size;
	}

	int getDirection()
	{
		return direction;
	}

	int getScore()
	{
		return this->highScore;
	}

	int getCount()
	{
		return this->count;
	}

	//setters
	void setDirection(int x)
	{
		this->direction = x;
	}

	void setSize(int size)
	{
		this->size = size;
	}
	void addToSize(int add)
	{
		this->size += add;
	}

	void moveHeadX(int x)
	{
		this->head.x += x;
	}

	void moveHeadY(int y)
	{
		this->head.y += y;
	}

	void setHeadX(int x)
	{
		this->head.x = x;
	}
	void setHeadY(int y)
	{
		this->head.y = y;
	}

	void addToScore()
	{
		this->highScore++;
	}

	void resetScore()
	{
		this->highScore = 0;
	}

	void addToCount()
	{
		this->count++;
	}

private:

	//direction of movement
	int direction;

	//size of snake
	int size;

	//Head of snake
	SDL_Rect head
	{
		500, 500, 10, 10
	};

	//Highscore of the current snake
	int highScore;

	//Number of snake
	int count;
};

//functions
void moveSnake(int direction, Snake* snake);

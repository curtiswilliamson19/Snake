#include "Snake.h"

//Handle snake movement
void moveSnake(int direction, Snake* snake)
{
	switch (direction)
	{
	case LEFT:
		snake->moveHeadX(-10);
		break;
	case RIGHT:
		snake->moveHeadX(10);
		break;
	case UP:
		snake->moveHeadY(-10);
		break;
	case DOWN:
		snake->moveHeadY(10);
		break;
	}
}

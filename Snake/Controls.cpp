#include "Controls.h"

void controlSnake(int& direction, bool& exit, SDL_Event e)
{
	if (e.type == SDL_QUIT)
	{
		exit = true;
	}
	if (e.type == SDL_KEYDOWN)
	{
		if (e.key.keysym.sym == SDLK_LEFT)
		{
			direction = LEFT;
		}
		if (e.key.keysym.sym == SDLK_RIGHT)
		{
			direction = RIGHT;
		}
		if (e.key.keysym.sym == SDLK_UP)
		{
			direction = UP;
		}
		if (e.key.keysym.sym == SDLK_DOWN)
		{
			direction = DOWN;
		}
	}
}

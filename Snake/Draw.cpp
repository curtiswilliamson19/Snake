#include "Draw.h"

//Draw screen colour
void drawScreen(SDL_Renderer* renderer)
{
	//Screen colour
	SDL_SetRenderDrawColor(renderer, 243, 240, 155, 255);

	//Clear renderer
	SDL_RenderClear(renderer);
}

//Draw snake
void drawSnake(SDL_Renderer* renderer, std::deque<SDL_Rect>& rectQ)
{
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 0);

	std::for_each(rectQ.begin(), rectQ.end(), [&](auto& snakeBody)
		{
			SDL_RenderFillRect(renderer, &snakeBody);
		});
}

//Draw apples
void drawApples(SDL_Renderer* renderer, std::vector<Apple*>& apples)
{
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	for (Apple* a : apples)
	{
		SDL_Rect app = a->getPosition();
		SDL_RenderFillRect(renderer, &app);
	}
}

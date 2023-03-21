#include "Game.h"

void playGame()
{
	//create window & renderer
	SDL_Window* window = SDL_CreateWindow("Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000, 0);
	auto renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_Event e;
	bool exit = false;
	int direction = 0;

	//Create snake object
	Snake* snake = new Snake;

	//Body of snake
	std::deque<SDL_Rect> rectQ;

	//Apples
	std::vector<Apple*> apples;
	createApples(apples);

	while (!exit)
	{

		//check user input
		while (SDL_PollEvent(&e))
		{
			controlSnake(direction, exit, e);
		}

		//Move snake
		moveSnake(direction, snake);

		//Collision (apples)
		collisionApples(renderer, snake, apples);

		//Collision (snake)
		collisionSnake(snake, rectQ, apples);

		//Draw screen
		drawScreen(renderer);

		//Draw snake
		drawSnake(renderer, rectQ);

		//Draw apples
		drawApples(renderer, apples);

		//out of bounds
		outOfBounds(snake);

		//Display
		SDL_RenderPresent(renderer);
		SDL_Delay(25);

	} //exit while
}

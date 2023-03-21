#include "Collision.h"
#include <iostream>

//Collision (apples)
void collisionApples(SDL_Renderer* renderer, Snake* snake, std::vector<Apple*>& apples)
{
	for (int i = 0; i < apples.size(); i++)
	{
		if (snake->getHead().x == apples.at(i)->getPosition().x && snake->getHead().y == apples.at(i)->getPosition().y)
		{
			snake->addToSize(10);

			//move apple offscreen
			apples.at(i)->setPosition(-10, -10);

			//add to score
			snake->addToScore();
		}
	}
}

//Collision (snake)
void collisionSnake(Snake* snake, std::deque<SDL_Rect>& rectQ, std::vector<Apple*>& apples)
{
	int highScore = 0;
	int tempScore = 0;

	std::for_each(rectQ.begin(), rectQ.end(), [&](auto& snakeBody)
		{
			if (snake->getHead().x == snakeBody.x && snake->getHead().y == snakeBody.y)
			{
				//reset snake to original size
				snake->setSize(1);

				//clear current apples
				apples.clear();

				//Create apples
				createApples(apples);

				//get score of the snakes lifetime
				std::cout << "Snake " << snake->getCount() << ": " << snake->getScore() << "\n\n";

				//reset score
				snake->resetScore();

				//add snake count
				snake->addToCount();
			}
		});

	//push new head to front of queue
	rectQ.push_front(snake->getHead());

	//pop back of snake, remove all segments
	while (rectQ.size() > snake->getSize())
	{
		rectQ.pop_back();
	}
}

//if snake out of bounds, appear opposite side
void outOfBounds(Snake* snake)
{
	if (snake->getHead().x > 1000)
	{
		snake->setHeadX(0);
	}
	else if (snake->getHead().x < 0)
	{
		snake->setHeadX(1000);
	}
	else if (snake->getHead().y > 1000)
	{
		snake->setHeadY(0);
	}
	else if (snake->getHead().y < 0)
	{
		snake->setHeadY(1000);
	}
}

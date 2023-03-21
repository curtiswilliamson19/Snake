#include "Apple.h"

void createApples(std::vector<Apple*>& apples)
{
	//Create apples
	for (int i = 0; i < 100; i++)
	{
		//every apple in a location divisable by 10
		//create apple at random location
		SDL_Rect ranApple{ rand() % 100 * 10, rand() % 100 * 10,10,10 };
		Apple* a = new Apple(ranApple);
		apples.emplace_back(a);
	}
}

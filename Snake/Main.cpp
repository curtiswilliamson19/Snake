#include "SDL.h"
#include "Game.h"

int main(int args, char* argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	std::cout << "Score: " << "\n\n";

	playGame();
	
	return 0;
}

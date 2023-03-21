#pragma once
#include "Apple.h"
#include "Draw.h"
#include <algorithm>

void collisionApples(SDL_Renderer* renderer, Snake* snake, std::vector<Apple*>& apples);

void collisionSnake(Snake* snake, std::deque<SDL_Rect>& rectQ, std::vector<Apple*>& apples);

void outOfBounds(Snake* snake);

#pragma once
#include "SDL.h"
#include "Apple.h"
#include <algorithm>
#include <deque>
#include <vector>
#include <iostream>

void drawScreen(SDL_Renderer* renderer);

void drawSnake(SDL_Renderer* renderer, std::deque<SDL_Rect>& rectQ);

void drawApples(SDL_Renderer* renderer, std::vector<Apple*>& apples);

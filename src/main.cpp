#include <iostream>

#include "SDL.h"

int main()
{
    SDL_Init(SDL_INIT_VIDEO);

    std::cout << "Worked" << std::endl;

    SDL_Quit();
}


#include <iostream>

#include "SDL.h"

int main(int, char*[])
{
    SDL_Init(SDL_INIT_VIDEO);

    std::cout << "Worked" << std::endl;

    SDL_Quit();

    return 0;
}


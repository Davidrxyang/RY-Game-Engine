
/*

 this is the main file for the actual game
 main will simply call the constructor for game

 hopefully this will allow me to implement levels 
 locations easier later on ... 

 but we shall find out

*/

#ifndef GAME_H
#define GAME_H

// libraries
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <string>

// functionality
#include "level.h"
#include "window.h"
#include "entity.h"
#include "player.h"
#include "timer.h"

// assets
#include "audio.h"
#include "music.h"

// entities
#include "dog.h"
#include "desk.h"
#include "button.h"

using namespace std;

class Game
{
    public:
        Game(); // default constructor
        Game(string player_name); // explicit constructor
        void start_game(); // start a new game
        
        // game-play functions
        bool has_collided(Entity a, Entity b) const; // checks collision between two entities

        void TEST_TEMPLATE(); // template for test games

        // test games
        void start_test_game_1(); // test V1
        void start_test_game_2(); // test V2
        void start_test_game_3(); // test V2


    private:
        Player player;
        Window game_window;

        // character entities
        Dog jack;

        // FPS controls 
        Timer FPS_timer;
        double FPS_AVG;
};

#endif
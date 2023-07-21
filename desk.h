#ifndef DESK_H
#define DESK_H

#include <SDL2/SDL.h>
#include <string>
#include "window.h"
#include "renderable.h"

using namespace std;

class Desk : public Renderable
{

    public:

        Desk(); // default constructor
        Desk(string name, Window window); // explicit constructor, spec name and window
        
        void set_name(string name) {this -> name = name;}; // set name
        string get_name() const {return name;}; // get name

    private:

        string name;
};

#endif 
#ifndef DOG_H
#define DOG_H

#include <SDL2/SDL.h>
#include <string>
#include "window.h"
#include "renderable.h"

using namespace std;

class Dog : public Renderable
{

    public:

        Dog(); // default constructor
        Dog(string name, Window window); // explicit constructor, spec name and window
        
        void set_name(string name) {this -> name = name;}; // set name
        string get_name() const {return name;}; // get name

    private:

        string name;
};

#endif 
#ifndef PROJECTILE_H
#define PROJECTILE_H

#include <SDL2/SDL.h>
#include <string>
#include <random>
#include "window.h"
#include "renderable.h"
#include "camera.h"

using namespace std;

const double PROJECTILE_SPEED = 1000;

class Projectile : public Renderable
{

    public:

        Projectile(); // default constructor
        Projectile(double ex, double ey, bool UP, bool LEFT, Window window); // explicit constructor

        void fire();
        void render_projectile(Window window, Camera camera); // render Projectile with camera offset
        bool is_active() const {return active;}; // is active
        void set_active(bool a) {active = a;}; // set active

    private:

        bool active;
};
#endif
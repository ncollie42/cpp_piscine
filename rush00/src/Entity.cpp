#include "../inc/Entity.hpp"
#include "curses.h"

/* ---------------------CONST/DEST--------------------------- */

Entity::Entity(WINDOW *win, int hp) : _window(win), _x(1), _y(1), _hp(hp), _shape('o') {
    return ;
}

Entity::Entity() {
}

Entity::Entity(const Entity &cpy) {
    *this = cpy;
}

Entity::~Entity(void) {
    // End the game and prompt user for restart
    return ;
}


Entity                 &Entity::operator=(const Entity &r) {
    this->_window = r._window;
    this->_x = r._x;
    this->_y = r._y;
    this->_hp = r._hp;
    return *this;
}


void                    Entity::move()
{
    setX(this->_x - this->_speed);
}



/* ---------------------SET/GET FNCTION ---------------------------- */

void                    Entity::set(WINDOW *win, int y, int x, int shape, int speed) {
    getmaxyx(win, this->_yMax, this->_xMax);
    this->_window = win;
    this->_x = x;
    this->_y = y;
    this->_shape = shape;
    this->_speed = speed;
}

int                     Entity::getHP(void) const {
    return this->_hp;
}

int                     Entity::getX(void) const {
    return this->_x;
}

int                     Entity::getY(void) const {
    return this->_y;
}

char                    Entity::getShape(void) const {
    return this->_shape;
}

int                     Entity::getXMax(void) const {
    return this->_xMax;
}

void                    Entity::setShape(char c) {
    this->_shape = c;
}

void                    Entity::setHP(int hp) {
    this->_hp = hp;
}


void                    Entity::setX(int x) {
    if (x >= this->_xMax - 2 || x <= 1) {
        mvwaddch(this->_window, this->_y, this->_x, ' ');
        this->_x = _xMax;
    }
    else {
        mvwaddch(this->_window, this->_y, this->_x, ' ');
        this->_x = x;
    }
}

void                    Entity::setY(int y) {
    if (y >= this->_yMax - 1 || y < 1)
         return ;
     else {
         mvwaddch(this->_window, this->_y, this->_x, ' ');
        this->_y = y;
    }
}

/* ----------------------DISPLAY FNCTION ----------------------------- */

void                      Entity::display(int color, int colorCode)
{
    init_pair(colorCode, color, COLOR_BLACK);
    wattron(_window, COLOR_PAIR(colorCode));
    mvwaddch(_window, _y, _x, _shape);
    wattroff(_window, COLOR_PAIR(colorCode));
}
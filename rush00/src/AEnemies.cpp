#include "../inc/AEnemies.hpp"
#include <curses.h>
#include <unistd.h>

/* ---------------------CONST/DEST--------------------------- */

AEnemies::AEnemies(WINDOW *win) : _alive(1) {
    getmaxyx(win, this->_yMax, this->_xMax);
    this->_window = win;
    this->_x = this->_xMax - 2; 
    this->_y = rand() % this->_yMax;
    this->_shape = '<';
}

AEnemies::AEnemies() {
}

AEnemies::AEnemies(const AEnemies &cpy) {
    *this = cpy;
}

AEnemies::~AEnemies(void) {
    return ;
}

/* ---------------------OP OVERLOAD--------------------------- */

AEnemies                &AEnemies::operator=(const AEnemies &r) {
    this->_window = r._window;
    this->_alive = r._alive;
    return *this;
}

void                    AEnemies::resetEnemy() {
    int enemy[4] = {'<', '*', 'o', '+'};
    setX(this->_xMax - 2);
    setY(rand() % this->_yMax - 1);
    this->_shape = enemy[rand() % 4];

    //Timeout??
}

void                    AEnemies::setX(int x) {
  
    if (x == 1) {
        this->_shape = ' ';
        resetEnemy();
    }
    else {
        mvwaddch(this->_window, this->_y, this->_x, ' ');
        this->_x = x;
    }
}

/* ---------------------- Move Function -----------------------*/

void                    AEnemies::move()
{
    setX(this->_x - this->_speed);
}
#include "../inc/Bullets.hpp"

Bullets::Bullets(void) {
    _shape = '=';
    return ;
}

Bullets::Bullets(const Bullets &cpy) {
    *this = cpy;
}

Bullets::~Bullets(void) {
    return ;
}

Bullets                &Bullets::operator=(const Bullets &r) {
    (void)r;
    return *this;
}


void                   Bullets::setX(int x) {
  
    if (x == this->getXMax() - 1) {
        this->_shape = ' ';
    }
    else {
        mvwaddch(this->_window, this->_y, this->_x, ' ');
        this->_x = x;
    }
}

void                    Bullets::update()
{
    this->move();
    this->display(COLOR_RED, 5);
}

/* ---------------------- Move Function -----------------------*/

void                    Bullets::move()
{
    setX(this->_x + this->_speed);
}

void                    Bullets::setY(int y) {
    if (y >= this->_yMax - 1)
         return ;
     else {
         mvwaddch(this->_window, this->_y, this->_x, ' ');
        this->_y = y;
    }
}

/*-----------------------RESET FUNCTION------------------------- */
#include <unistd.h>
void                    Bullets::resetBullet(Bullets &bullet) {
    bullet._shape = ' ';
    bullet.setY(-10000);
    // delete &bullet;
    //std::cout <<  getX() << " " << getY();
}
#include "../inc/Player.hpp"
#include "../inc/Bullets.hpp"
#include <curses.h>
#define SPACE_KEY 32
#define ESC_KEY 27

int g_score;
double g_seconds;

/* ---------------------CONST/DEST--------------------------- */

Player::Player(WINDOW *win, int hp){
    getmaxyx(win, this->_yMax, this->_xMax);
    this->_window = win;
    this->_hp = hp;
    this->_shape = '0';
    this->_x = 1; 
    this->_y = 1;
    // this->_activeBullets = 5;
    return ;
}

Player::Player() {
}

Player::Player(const Player &cpy) {
    *this = cpy;
}

Player::~Player(void) {
    // End the game and prompt user for restart
    return ;
}

/* ---------------------OP OVERLOAD--------------------------- */

Player                  &Player::operator=(const Player &r) {
    this->_hp = r._hp;
    this->_shape = r._shape;
    return *this;
}

/* -----------------------SHOOT ------------------------------- */

void                      Player::nukeMode(Bullets &bullet) {
    while (bullet.getX() < bullet.getXMax() - 1) {
        bullet.setX(bullet.getX() + 1);
        bullet.display(COLOR_RED, 3);
    }
}

void                      Player::shoot(void) {
    static int index;

    if (index < BULLET_MAX - 1)
        index++;
    else
        index = 0;
    if (this->_activeBullets < BULLET_MAX - 1) {
        this->_Bul[index].set(this->_window, this->_y, this->_x + 1, '=', 1);
        this->_activeBullets++;
    }
}

/* -----------------------GET/SET------------------------------- */

void                       Player::set(WINDOW *win, int y, int x, int shape, int speed) {
    getmaxyx(win, this->_yMax, this->_xMax);
    this->_window = win;
    this->_ry = y;
    this->_rx = x - 2;
    this->_cy = y;
    this->_cx = x - 1;
    this->_x = x;
    this->_y = y;
    this->_rocket = '[';
    this->_corps = '=';
    this->_shape = shape;
    this->_speed = speed;
}


Bullets                   *Player::getBullet(void) {
    return this->_Bul;
}

int                        Player::getBulletCount(void) {
    return this->_activeBullets;
}

void                       Player::setBulletCount(int n) {
    this->_activeBullets = n;
}

int                         Player::getCX(void) {
    return this->_cx;
}

int                         Player::getCY(void) {
    return this->_cy;
}

int                         Player::getRX(void) {
    return this->_rx;
}

int                         Player::getRY(void) {
    return this->_ry;
}

void                        Player::setX(int x) {
    if (x >= this->_xMax - 2 || x < 3) {
        return;
    }
    else {
        mvwaddch(this->_window, this->_y, this->_x, ' ');
        this->_x = x;

    }
}

void                        Player::setRX(int x) {
    if (x >= this->_xMax - 4 || x < 1) {
        return;
    }
    else {
        mvwaddch(this->_window, this->_ry, this->_rx, ' ');
        this->_rx = x;
    }
}
 
void                        Player::setRY(int y) {
    if (y >= this->_yMax - 1 || y < 1)
         return ;
     else {
         mvwaddch(this->_window, this->_ry, this->_rx, ' ');
        this->_ry = y;
    }
}

void                        Player::setCY(int y) {
    if (y >= this->_yMax - 1 || y < 1)
         return ;
     else {
         mvwaddch(this->_window, this->_cy, this->_cx, ' ');
        this->_cy = y;
    }
}

void                        Player::setCX(int x) {
    if (x >= this->_xMax - 3 || x < 2) {
        return;
    }
    else {
        mvwaddch(this->_window, this->_cy, this->_cx, ' ');
        this->_cx = x;
    }
}

/*------------------------DISPLAY --------------------------------- */

void                        Player::display(int color, int colorCode) {
    /* -------ROCKET ---------- */
    init_pair(colorCode, COLOR_RED, COLOR_BLACK);
    wattron(_window, COLOR_PAIR(colorCode));
    mvwaddch(_window, _ry, _rx, _rocket);
    wattroff(_window, COLOR_PAIR(colorCode));
    /*-----CORPS ------ */
    init_pair(colorCode, color, COLOR_BLACK);
    wattron(_window, COLOR_PAIR(colorCode));
    mvwaddch(_window, _cy, _cx + 1, _corps);
    init_pair(colorCode, color, COLOR_BLACK);
    /* ----EMBOUT ------ */
    wattron(_window, COLOR_PAIR(colorCode));
    mvwaddch(_window, _y, _x, _shape);
    wattroff(_window, COLOR_PAIR(colorCode));
}

/* -----------------------PROMPT CMD-------------------------------- */

void                      Player::update(void) {
    handleCmd();
    mvwprintw(_window, 1, 1, "Score: %d", g_score);
    mvwprintw(_window, 1, 13, "Time: %.1lf", g_seconds);
    for (int n = 0; n < BULLET_MAX; n++)
        this->_Bul[n].update();
    display(COLOR_WHITE, 1);
}

void                     Player::handleCmd(void) {
    int c = wgetch(this->_window);

    if (c == ESC_KEY) {
        endwin();
        exit(0);
    }
    else if (c == SPACE_KEY) {
        this->shoot();
    }
    else if (c == KEY_LEFT) {
        this->setRX(this->getRX() - _speed);
        this->setCX(this->getCX() - _speed);
        this->setX(this->getX() - _speed);
    }
    else if (c == KEY_UP) {
        // move up
        this->setRY(this->getRY() - _speed);
        this->setCY(this->getCY() - _speed);
        this->setY(this->getY() - _speed);
    }
    else if (c == KEY_RIGHT) {
        // move right
        this->setRX(this->getRX() + _speed);
        this->setCX(this->getCX() + _speed);
        this->setX(this->getX() + _speed);
    }
    else if (c == KEY_DOWN) {
        // move down
        this->setRY(this->getRY() + _speed);
        this->setCY(this->getCY() + _speed);
        this->setY(this->getY() + _speed);
    }
}
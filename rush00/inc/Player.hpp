#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Entity.hpp"
#include "Bullets.hpp"
#include <iostream>
#include <curses.h>
#define BOLD "\x1b[1m"
#define RESET "\x1b[0m"
#define PURPLE "\x1b[95m"

class Player : public Entity {
    public:
        Player();
        Player(WINDOW *win, int hp);
        Player(const Player &cpy);
        ~Player(void);

        Player                  &operator=(const Player &r);

        void                        update(void);
        void                        handleCmd(void);

        Bullets                     *getBullet(void);
        int                         getBulletCount(void);

        void                        setBulletCount(int n);

        void                        set(WINDOW *win, int y, int x, int shape, int speed);
        void                        display(int color, int colorCode);

        void                        shoot(void);
        void                        nukeMode(Bullets &bullet);
        void                        setX(int x);

        void                        setRX(int x);
        void                        setRY(int y);
        void                        setCX(int x);
        void                        setCY(int y);

        int                         getRX(void);
        int                         getRY(void);
        int                         getCX(void);
        int                         getCY(void);

    private:
        Bullets                      _Bul[BULLET_MAX];
        int                          _activeBullets;
        int                          _rx;
        int                          _ry;
        int                          _cx;
        int                          _cy;
};

#endif
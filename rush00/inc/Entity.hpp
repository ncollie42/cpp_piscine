#ifndef Entity_HPP
#define Entity_HPP
#include <iostream>
#include <curses.h>
#define BOLD "\x1b[1m"
#define RESET "\x1b[0m"
#define PURPLE "\x1b[95m"

class Entity {
    public:
        Entity();
        Entity(WINDOW *win, int hp);
        Entity(const Entity &cpy);
        ~Entity(void);

        Entity                  &operator=(const Entity &r);

        int                         getHP(void) const;
        int                         getX(void) const;
        int                         getY(void) const;
        char                        getShape(void) const;
        int                         getXMax(void) const;

        void                        setHP(int hp);
        void                        setX(int x);
        void                        setY(int y);
        void                        setShape(char c);

        void                        display(int color, int colorCode);
        void                        update(void);
        void                        move(void);
        void                        set(WINDOW *win, int y, int x, int shape, int speed);

    protected:
        WINDOW                       *_window;
        int                          _xMax;
        int                          _yMax;
        int                          _x;
        int                          _y;
        int                          _hp;
        int                          _rocket;
        int                          _corps;
        int                          _shape;
        int                          _speed;

};

#endif
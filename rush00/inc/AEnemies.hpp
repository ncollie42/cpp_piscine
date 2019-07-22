#ifndef AENEMIES_HPP
#define AENEMIES_HPP
#include <iostream>
#include <curses.h>
#include "Entity.hpp"

class AEnemies : public Entity {
    public:
        AEnemies(void);
        AEnemies(WINDOW *win);
        AEnemies(const AEnemies &cpy);
        virtual ~AEnemies(void);

        AEnemies                &operator=(const AEnemies &r);
        void                    setX(int x);
        void                    resetEnemy(void);
        void                    move(void);

    protected:
        bool                    _alive;
};


#endif
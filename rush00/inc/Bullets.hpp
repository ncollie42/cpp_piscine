#ifndef BULLETS_H
#define BULLETS_H
#define BULLET_MAX 300
#include "Entity.hpp"

class Bullets : public Entity {
    public:
        Bullets();
        Bullets(const Bullets &cpy);
        ~Bullets();

        Bullets                    &operator=(const Bullets &r);
        void                        move(void);
        void                        setX(int x);
        void                        setY(int y);
        void                        update(void);

        void                        resetBullet(Bullets &bullet);
};

#endif
#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H
#include "Zombie.hpp"

class ZombieHorde
{
    public:
        void annouce(void);
        ZombieHorde(int N);
        ~ZombieHorde();
    private:
        Zombie  *_horde;
        int     _hordeSize;
};

#endif
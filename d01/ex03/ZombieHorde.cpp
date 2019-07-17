#include "ZombieHorde.hpp"
#include <unistd.h>

std::string random_name( void )
{
    srand(time(NULL)); // set seed

    std::string names[] = {"bill", "bob", "mike", "Mr.dead", "Dr.who"};
    sleep(1);
    std::string name = names[ rand () % 5];
    return name;
}

ZombieHorde::ZombieHorde(int N)
{
    _horde = new Zombie[N];
    _hordeSize = N;
    for (int i = 0; i < N; i++)
        _horde[i].setNameANDType(random_name(), "horde");

}

void    ZombieHorde::annouce()
{
    for (int i = 0; i < _hordeSize; i++)
        _horde[i].annouce();
}

ZombieHorde::~ZombieHorde()
{
    delete [] _horde;
}


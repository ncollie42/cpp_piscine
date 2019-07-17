#include "ZombieEvent.hpp"
#include <unistd.h>

void    ZombieEvent::setZombieType(std::string type)
{
    _type = type;
}


Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *tmp = new Zombie(name, _type);

    return tmp;
}

Zombie  *ZombieEvent::randomChump()
{
    srand(time(NULL)); // set seed

    std::string names[] = {"bill", "bob", "mike", "Mr.dead", "Dr.who"};
    sleep(1);
    std::string name = names[ rand () % 5 + 1];
    Zombie *tmp = new Zombie(name, _type);

    tmp->annouce();
    return tmp;
}
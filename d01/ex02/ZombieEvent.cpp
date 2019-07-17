#include "ZombieEvent.hpp"
#include <unistd.h>

void    ZombieEvent::setZombieType(std::string type)
{
    _type = type;
}
std::string random_name( void )
{
    srand(time(NULL)); // set seed

    std::string names[] = {"bill", "bob", "mike", "Mr.dead", "Dr.who"};
    sleep(1);
    std::string name = names[ rand () % 5];
    return name;
}

Zombie ZombieEvent::quickZombie( void )
{
    Zombie tmp = Zombie(_type);

    return tmp;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *tmp = new Zombie(name, _type);

    return tmp;
}

Zombie  *ZombieEvent::randomChump()
{
    
    std::string name = random_name();
    Zombie *tmp = new Zombie(name, _type);

    tmp->annouce();
    return tmp;
}
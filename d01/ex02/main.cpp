#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main (void)
{
    ZombieEvent event_1;
    event_1.setZombieType("funny");
    ZombieEvent event_2;
    event_2.setZombieType("crazy");
    ZombieEvent event_3;
    event_3.setZombieType("wtf_run");
    
    Zombie *a = event_1.randomChump();
    Zombie *b = event_2.randomChump();
    Zombie *c = event_3.randomChump();

    Zombie *d = event_1.newZombie("qpeng");
    Zombie *e = event_2.newZombie("ncollie");
    std::cout << "killing two" << std::endl;
    delete d;
    delete e;

    a->eat();
    b->eat();
    c->eat();
    for (unsigned long i = 0; i < 10; i++)
    {
        Zombie tmp = event_3.quickZombie();
        tmp.eat();
    }
    std::cout << "Rest live for ever.. oh oh" << std::endl;
}
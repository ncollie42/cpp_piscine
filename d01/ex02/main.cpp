#include "Zombie.hpp"
#include "ZombieEvent.hpp"
int main (void)
{
    ZombieEvent event;
    event.setZombieType("funny");
    Zombie *a = event.randomChump();
    Zombie *b = event.randomChump();
    Zombie *c = event.randomChump();

    delete a;
}
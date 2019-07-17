#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int main(void)
{
    ZombieHorde big = ZombieHorde(10);
    std::cout << "annoucing:" << std::endl;
    big.annouce();
}
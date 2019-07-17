#include "Zombie.hpp"
#include <iostream>

void       Zombie::setNameANDType(std::string name, std::string type)
{
    _name = name;
    _type = type;
}

Zombie::Zombie ( void )
{
}

Zombie::~Zombie( void )
{
    std::cout << _name << " dropped dead" << std::endl;
}

void    Zombie::annouce( void )
{
    std::cout << "< " << _name << " (" << _type << ") " << "> Braiiiinnnnsssss..." << std::endl;
}
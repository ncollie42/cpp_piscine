#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie ( std::string name, std::string type )
{
    _name = name;
    _type = type;

    std::cout << "Shit... new " << _type << " zombie, his name is "
        << _name << std::endl;
}

Zombie::Zombie ( std::string type )
{
    _name = "unknown";
    _type = type;
}

Zombie::~Zombie( void )
{
    std::cout << _name << " is now dead dead... I hope?" << std::endl;
}

void    Zombie::annouce( void )
{
    std::cout << "< " << _name << " (" << _type << ") " << "> Braiiiinnnnsssss...\n" << std::endl;
}

void    Zombie::eat( void )
{
    std::cout << "< " << _name << " (" << _type << ") " << "> Just ate someone.. ew\n" << std::endl;
}
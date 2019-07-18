#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &wep) : _name(name) , _wep(wep)
{
}

void    HumanA::attack( void )
{
    std::cout << _name << " attacks with " << _wep.getType() << std::endl;
}
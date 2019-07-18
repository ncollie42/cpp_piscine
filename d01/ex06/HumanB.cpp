#include "HumanB.hpp"

HumanB::HumanB (std::string name) : _name(name) , _wep(nullptr)
{
}

void    HumanB::attack( void )
{
    std::cout << _name << " attacks with " << _wep->getType() << std::endl;
}

void HumanB::setWeapon( Weapon &wep)
{
    _wep = &wep;
}
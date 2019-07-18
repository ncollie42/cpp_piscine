#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"

class HumanB
{
    public:
        void attack( void );
        HumanB( std::string name);
        void setWeapon( Weapon &wep);
    private:
        std::string _name;
        Weapon *_wep;
};  

#endif
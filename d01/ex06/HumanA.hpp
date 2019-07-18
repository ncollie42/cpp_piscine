#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.hpp"

class HumanA
{
     public:
        void attack( void );
        HumanA( std::string name, Weapon &wep);
        void setWeapon( Weapon web);
    private:
        std::string _name;
        Weapon &_wep;
};

#endif

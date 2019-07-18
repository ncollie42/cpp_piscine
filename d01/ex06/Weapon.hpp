#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <iostream>

class Weapon
{
    public:
        const std::string getType( void ) const;
        Weapon( std::string type);
        Weapon( void );
        void    setType (std::string type);
    private:
        std::string _type;
};

#endif
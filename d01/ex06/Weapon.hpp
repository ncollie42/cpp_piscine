#ifndef WEAPON_H
#define WEAPON_H
#include <string>

class Weapon
{
    public:
        const std::string getType( void ) const;
        Weapon( std::string type);
        void    setType (std::string type);
    private:
        std::string _type;
};

#endif


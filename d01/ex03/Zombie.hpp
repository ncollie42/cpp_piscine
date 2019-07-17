#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
    public:
        void    annouce( void );
        Zombie( void );
       ~Zombie (void);
        void    setNameANDType(std::string name, std::string type);
    private:
        std::string _name;
        std::string _type;
        
};

#endif
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
    public:
        void    annouce( void );
        Zombie(std::string name, std::string type);
        ~Zombie (void);
    private:
        std::string _name;
        std::string _type;
};

#endif
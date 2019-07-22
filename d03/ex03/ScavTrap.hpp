#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

    public:
        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( const ScavTrap &copy);
        ~ScavTrap( void );
        ScavTrap & operator=(ScavTrap const &rhs );

        void rangedAttack(ScavTrap & target) const;
        void meleeAttack(ScavTrap & target) const;
       
        void challengeNewcomer(ScavTrap & target);
        int _hp;
        std::string _name;
    private:

        unsigned int challengeNewcomer(std::string const & target) const;
        unsigned int rangedAttack(std::string const & target) const;
        unsigned int meleeAttack(std::string const & target) const;
        // int _max_hp;
        // int _energy;
        // int _max_energy;
        // int _level;
        // int _mele_damage;
        // int _range_damage;
        // int _damage_redunction;
};

#endif
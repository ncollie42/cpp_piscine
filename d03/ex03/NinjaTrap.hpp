#ifndef NinjaTrap_H
#define NinjaTrap_H
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{

    public:
        NinjaTrap( void );
        NinjaTrap( std::string name );
        NinjaTrap( const NinjaTrap &copy);
        ~NinjaTrap( void );
        NinjaTrap & operator=(NinjaTrap const &rhs );

        void rangedAttack(NinjaTrap & target) const;
        void meleeAttack(NinjaTrap & target) const;
       
        void ninjaShoebox(NinjaTrap & target);
        void ninjaShoebox(FragTrap & target);
        void ninjaShoebox(ScavTrap & target);
        void ninjaShoebox(ClapTrap & target);
    private:

        unsigned int ninjaShoebox(std::string const & target) const;
        unsigned int rangedAttack(std::string const & target) const;
        unsigned int meleeAttack(std::string const & target) const;
        int _max_hp;
        int _hp;
        int _energy;
        int _max_energy;
        int _level;
        std::string _name;
        int _mele_damage;
        int _range_damage;
        int _damage_redunction;
};

#endif
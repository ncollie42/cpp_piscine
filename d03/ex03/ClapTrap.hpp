#ifndef ClapTrap_H
#define ClapTrap_H
#include <string>

class ClapTrap{

    public:
        ClapTrap( void );
        ClapTrap( std::string name );
        ClapTrap( const ClapTrap &copy);
        ~ClapTrap( void );
        ClapTrap & operator=(ClapTrap const &rhs );

        void rangedAttack(ClapTrap & target) const;
        void meleeAttack(ClapTrap & target) const;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int _hp;
        std::string _name;
        int _max_hp;
        int _energy;
        int _max_energy;
        int _level;
        int _mele_damage;
        int _range_damage;
        int _damage_redunction;
    private:

        unsigned int challengeNewcomer(std::string const & target) const;
        unsigned int rangedAttack(std::string const & target) const;
        unsigned int meleeAttack(std::string const & target) const;
};

#endif
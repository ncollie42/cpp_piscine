#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <string>

class FragTrap{

    public:
        FragTrap( void );
        FragTrap( std::string name );
        FragTrap( const FragTrap &copy);
        ~FragTrap( void );
        FragTrap & operator=(FragTrap const &rhs );

        void rangedAttack(FragTrap & target) const;
        void meleeAttack(FragTrap & target) const;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(FragTrap & target);
    private:

        unsigned int vaulthunter_dot_exe(std::string const & target) const;
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
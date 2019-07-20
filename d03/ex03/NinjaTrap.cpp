#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap ( void ) :_max_hp(60), _hp(60), _energy(120), _max_energy(120),
	_level(1), _name("NinjaTrap"), _mele_damage(60), _range_damage(5), _damage_redunction(0)
{
    std::cout << _name << " is born!" << std::endl;
}

NinjaTrap::NinjaTrap ( std::string name ) : _max_hp(60), _hp(60), _energy(120), _max_energy(120),
	_level(1), _name(name), _mele_damage(60), _range_damage(5), _damage_redunction(0)
{
   std::cout << _name << " is silently born!" << std::endl;
}

NinjaTrap::~NinjaTrap ( void )
{
    std::cout << _name << " died a silent death" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& that)
{
	*this = that;
   std::cout << _name << " is silently born!" << std::endl;
}

NinjaTrap& NinjaTrap::operator =(const NinjaTrap& that)
{
	_hp = that._hp;
	_max_hp = that._max_hp;
	_energy = that._energy;
	_max_energy = that._max_energy;

	_level = that._level;
	_name = that._name;

	_mele_damage = that._mele_damage;
	_range_damage = that._range_damage;
	_damage_redunction = that._damage_redunction;

	return *this;
}

unsigned int NinjaTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->_name << " ranged attacked " <<
	target << " for " << _range_damage << " damage! Shhsss" << std::endl;
	return _range_damage;
}

void NinjaTrap::rangedAttack(NinjaTrap &target) const
{
	if ( target._hp > 0 )
		target.takeDamage(rangedAttack(target._name));
	else
		std::cout << "he's already dead bro" << std::endl;
}

unsigned int NinjaTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->_name << " mele attacked " <<
	target << " for " << _mele_damage << " damage! Shhhhhhsss" << std::endl;
	return _mele_damage;
}

void NinjaTrap::meleeAttack(NinjaTrap &target) const
{
	if ( target._hp > 0 )
		target.takeDamage(meleeAttack(target._name));
	else
		std::cout << "he's already dead bro" << std::endl;
}

unsigned int NinjaTrap::ninjaShoebox(std::string const & target) const
{
    std::cout << this->_name << " used a box to kill " << target << ". Wow" << std::endl;
    return (_mele_damage * 2);
}

void NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
    if ( _energy > 0)
    {
        if ( target._hp > 0)
            target.takeDamage(ninjaShoebox(target._name));
        else
            std::cout << "he's already dead bro" << std::endl;
        _energy -= 20;
    }
    else
        std::cout << _name << " no energy to use his shoebox and kill someone" << std::endl;
    
}

void NinjaTrap::ninjaShoebox(FragTrap & target)
{
    if ( _energy > 0)
    {
        if ( target._hp > 0)
            target.takeDamage(ninjaShoebox(target._name));
        else
            std::cout << "he's already dead bro" << std::endl;
        _energy -= 20;
    }
    else
        std::cout << _name << " no energy to use his shoebox and kill someone" << std::endl;
    
}

void NinjaTrap::ninjaShoebox(ScavTrap & target)
{
    if ( _energy > 0)
    {
        if ( target._hp > 0)
            target.takeDamage(ninjaShoebox(target._name));
        else
            std::cout << "he's already dead bro" << std::endl;
        _energy -= 20;
    }
    else
        std::cout << _name << " no energy to use his shoebox and kill someone" << std::endl;
    
}

void NinjaTrap::ninjaShoebox(ClapTrap & target)
{
    if ( _energy > 0)
    {
        if ( target._hp > 0)
            target.takeDamage(ninjaShoebox(target._name));
        else
            std::cout << "he's already dead bro" << std::endl;
        _energy -= 20;
    }
    else
        std::cout << _name << " no energy to use his shoebox and kill someone" << std::endl;
    
}
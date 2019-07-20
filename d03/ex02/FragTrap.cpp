#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap ( void ) :_max_hp(100), _hp(100), _energy(100), _max_energy(100),
	_level(1), _name("FragTrap"), _mele_damage(30), _range_damage(20), _damage_redunction(5)
{
    std::cout << _name << " is born!" << std::endl;
}

FragTrap::FragTrap ( std::string name ) :_max_hp(100), _hp(100), _energy(100), _max_energy(100),
	_level(1), _name(name), _mele_damage(30), _range_damage(20), _damage_redunction(5)
{
   std::cout << _name << " is born!" << std::endl;
}

FragTrap::~FragTrap ( void )
{
    std::cout << _name << " died a horrible death" << std::endl;
}

FragTrap::FragTrap(const FragTrap& that)
{
	*this = that;
   std::cout << _name << " is born!" << std::endl;
}

FragTrap& FragTrap::operator =(const FragTrap& that)
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

unsigned int FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->_name << " ranged attacked " <<
	target << " for " << _range_damage << " damage!" << std::endl;
	return _range_damage;
}

void FragTrap::rangedAttack(FragTrap &target) const
{
	if ( target._hp > 0 )
		target.takeDamage(rangedAttack(target._name));
	else
		std::cout << "he's already dead bro" << std::endl;
}

unsigned int FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->_name << " mele attacked " <<
	target << " for " << _mele_damage << " damage!" << std::endl;
	return _mele_damage;
}

void FragTrap::meleeAttack(FragTrap &target) const
{
	if ( target._hp > 0 )
		target.takeDamage(meleeAttack(target._name));
	else
		std::cout << "he's already dead bro" << std::endl;
}

unsigned int FragTrap::vaulthunter_dot_exe(std::string const &target) const
{
	std::string tmp[] = {"Ouch that must of hurt",
	 "is he dead?",
	 "Boom",
	 "Wow! That looked pretty",
	 "I think he's bleeding"};
	
	std::cout << this->_name << " used 'vaulthunter.exe' " <<
	target << " for " << _mele_damage << " damage!\n" 
	<< _name << ": " << tmp[rand() % 5] << std::endl;
	return _mele_damage;
}

void FragTrap::vaulthunter_dot_exe(FragTrap &target)
{
	if (_energy > 0)
	{
		if ( target._hp > 0 )
			target.takeDamage(vaulthunter_dot_exe(target._name));
		else
			std::cout << "he's already dead bro" << std::endl;
		_energy -= 25;
	}
	else
	{
		std::cout << _name << " has no energy to cast 'vaulthunter.exe'" << std::endl;
	}
	
}

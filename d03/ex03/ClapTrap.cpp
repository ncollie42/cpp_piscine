#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap ( void ) :_max_hp(100), _hp(100), _energy(100), _max_energy(100),
	_level(1), _name("ClapTrap"), _mele_damage(30), _range_damage(20), _damage_redunction(5)
{
    std::cout << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap ( std::string name ) :_max_hp(100), _hp(100), _energy(100), _max_energy(100),
	_level(1), _name(name), _mele_damage(30), _range_damage(20), _damage_redunction(5)
{
   std::cout << _name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap ( void )
{
    std::cout << _name << " died a horrible death" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& that)
{
	*this = that;
   std::cout << _name << " is born!" << std::endl;
}

ClapTrap& ClapTrap::operator =(const ClapTrap& that)
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

unsigned int ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->_name << " ranged attacked " <<
	target << " for " << _range_damage << " damage! Ouch!" << std::endl;
	return _range_damage;
}

void ClapTrap::rangedAttack(ClapTrap &target) const
{
	if ( target._hp > 0 )
		target.takeDamage(rangedAttack(target._name));
	else
		std::cout << "he's already dead bro" << std::endl;
}

unsigned int ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->_name << " mele attacked " <<
	target << " for " << _mele_damage << " damage! Ouch!" << std::endl;
	return _mele_damage;
}

void ClapTrap::meleeAttack(ClapTrap &target) const
{
	if ( target._hp > 0 )
		target.takeDamage(meleeAttack(target._name));
	else
		std::cout << "he's already dead bro" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 0)
	{
		_hp -= (amount - _damage_redunction);
		if (_hp < 0)
			_hp = 0;
		std::cout << _name << " has " << _hp << " hp" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)(_hp + amount) > _max_hp )
		_hp = _max_hp;
	else
		_hp += amount;
	std::cout << _name << " got healed to " << _hp << " hp" << std::endl;
}

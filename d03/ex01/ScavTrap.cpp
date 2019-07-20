#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap ( void ) :_max_hp(100), _hp(100), _energy(50), _max_energy(50),
	_level(1), _name("ScavTrap"), _mele_damage(20), _range_damage(15), _damage_redunction(3)
{
    std::cout << _name << " is a new ScavTrap unit!" << std::endl;
}

ScavTrap::ScavTrap ( std::string name ) :_max_hp(100), _hp(100), _energy(50), _max_energy(50),
	_level(1), _name(name), _mele_damage(20), _range_damage(15), _damage_redunction(3)
{
   std::cout << _name << " is a new ScavTrap unit." << std::endl;
}

ScavTrap::~ScavTrap ( void )
{
    std::cout << _name << " died a decent death" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& that)
{
	*this = that;
   std::cout << _name << " is born!" << std::endl;
}

ScavTrap& ScavTrap::operator =(const ScavTrap& that)
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

unsigned int ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->_name << " ranged attacked " <<
	target << " for " << _range_damage << " damage! Pow Pow Pow" << std::endl;
	return _range_damage;
}

void ScavTrap::rangedAttack(ScavTrap &target) const
{
	if ( target._hp > 0 )
		target.takeDamage(rangedAttack(target._name));
	else
		std::cout << "he's already dead bro" << std::endl;
}

unsigned int ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->_name << " mele attacked " <<
	target << " for " << _mele_damage << " damage! Pew pew pew" << std::endl;
	return _mele_damage;
}

void ScavTrap::meleeAttack(ScavTrap &target) const
{
	if ( target._hp > 0 )
		target.takeDamage(meleeAttack(target._name));
	else
		std::cout << "he's already dead bro" << std::endl;
}

unsigned int ScavTrap::challengeNewcomer(std::string const &target) const
{
    std::cout << "Hey newcomer, I've got a challenge/question for you, pass and you enter ;)" << std::endl;

	std::string tmp[] = {"Where are we?",
	 "What is the meaning of life?",
	 "How many brothers do I have?",
	 "How old do you think I am?",
	 "Favorite number?"};
    std::string in;

    std::cout << tmp[rand() % 5] << std::endl;
    getline(std::cin, in);
    if (!in.compare("42"))
    {
        std::cout << "Good, you passed. You don't die today!\t\t **Welcome in " << target << "**" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Not even close, Sorry.... Not sorry" << std::endl;
        return 80;
    }
}

void ScavTrap::challengeNewcomer(ScavTrap &target)
{
	if (_energy > 0)
	{
		if ( target._hp > 0 )
			target.takeDamage(challengeNewcomer(target._name));
		else
			std::cout << "he's already dead bro" << std::endl;
		_energy -= 25;
	}
	else
	{
		std::cout << _name << " has no energy to challenge a new commer'" << std::endl;
	}
	
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (amount  > 0)
    {
        _hp -= (amount - _damage_redunction);
        if (_hp < 0)
            _hp = 0;
        std::cout << _name << " has " << _hp << " hp" << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if ((int)(_hp + amount) > _max_hp )
		_hp = _max_hp;
	else
		_hp += amount;
	std::cout << _name << " got healed to " << _hp << " hp" << std::endl;
}

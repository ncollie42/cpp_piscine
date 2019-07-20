#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

int main(void)
{
	ScavTrap	sbot1;
	ScavTrap	sbot2("Mr.qpen");

	sbot1.challengeNewcomer(sbot2);
	sbot1.challengeNewcomer(sbot2);
	sbot1.challengeNewcomer(sbot2);
	sbot1.beRepaired(100);
	sbot2.rangedAttack(sbot1);

	std::cout << "----------------------------" << std::endl;
	
	FragTrap	bot;
	FragTrap	tcho("Mr.Tcho");

	bot.meleeAttack(tcho);
	tcho.rangedAttack(bot);
	bot.vaulthunter_dot_exe(tcho);
	bot.beRepaired(10);
	tcho.meleeAttack(bot);

	std::cout << "----------------------------" << std::endl;

	NinjaTrap	nbot;
	NinjaTrap	bill("Mr.x");

	bill.ninjaShoebox(nbot);
	bill.ninjaShoebox(tcho);
	bill.ninjaShoebox(sbot1);
}
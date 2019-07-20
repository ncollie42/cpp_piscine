#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	sbot1;
	ScavTrap	sbot2("Mr.qpen");

	sbot1.challengeNewcomer(sbot2);
	sbot1.challengeNewcomer(sbot2);
	sbot1.challengeNewcomer(sbot2);
	sbot1.beRepaired(100);
	sbot2.rangedAttack(sbot1);

	
	FragTrap	bot;
	FragTrap	tcho("Mr.Tcho");

	bot.meleeAttack(tcho);
	tcho.rangedAttack(bot);
	bot.vaulthunter_dot_exe(tcho);
	bot.beRepaired(10);
	tcho.meleeAttack(bot);
}
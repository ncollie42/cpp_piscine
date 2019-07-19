#include "FragTrap.hpp"

int main(void)
{
	FragTrap	bot;
	FragTrap	tcho("Mr.Tcho");

	bot.meleeAttack(tcho);
	tcho.rangedAttack(bot);
	bot.vaulthunter_dot_exe(tcho);
	bot.vaulthunter_dot_exe(tcho);
	bot.vaulthunter_dot_exe(tcho);
	bot.vaulthunter_dot_exe(tcho);
	bot.vaulthunter_dot_exe(tcho);
	bot.beRepaired(10);
	tcho.meleeAttack(bot);
}
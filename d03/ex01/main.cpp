#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	sbot1;
	ScavTrap	sbot2("Mr.qpen");

	sbot1.challengeNewcomer(sbot2);
	sbot1.challengeNewcomer(sbot2);
	sbot1.challengeNewcomer(sbot2);
	sbot1.challengeNewcomer(sbot2);
	sbot1.challengeNewcomer(sbot2);
}
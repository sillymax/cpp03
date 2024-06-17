#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap reject;
	FragTrap bot1("CL4P-TP");
	FragTrap bot2(bot1);

	reject = bot2;
	reject.highFivesGuys();
	reject.attack("Handsome Jack");
	reject.takeDamage(1000);
	reject.highFivesGuys();


	while (bot1.getHitPoints() > 0)
		bot1.takeDamage(20);
	while (bot1.getEnergyPoints() > 0)
	{
		std::cout << bot1.getEnergyPoints() << std::endl;
		bot1.attack("Handsome Jack");
	}
}

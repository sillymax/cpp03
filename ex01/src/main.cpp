#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap reject;
	ScavTrap bot1("CL4P-TP");
	ScavTrap bot2(bot1);

	reject = bot2;
	reject.guardGate();
	reject.attack("Handsome Jack");
	reject.takeDamage(1000);
	reject.guardGate();
}

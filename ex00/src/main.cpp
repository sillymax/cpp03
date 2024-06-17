#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap reject;
	ClapTrap bot1("CL4P-TP");
	ClapTrap bot2(bot1);

	reject = bot2;	
	reject.attack("Handsome Jack");
	reject.takeDamage(5);
	reject.beRepaired(5);
}

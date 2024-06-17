#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	// DiamondTrap reject;
	DiamondTrap bot1("Alice");
	// reject = bot1;
	bot1.attack("Handsome Jack");
	bot1.whoAmI();
	bot1.highFivesGuys();
	bot1.guardGate();
}

// int x = 10;

// void exampleFunction() {
//     int x = 5;  // This shadows the global variable 'x'
//     std::cout << "Local x: " << x << std::endl;
//     std::cout << "Global x: " << ::x << std::endl;  // Accessing the global 'x' using scope resolution
// }

// int main() {
//     exampleFunction();
//     return 0;
// }

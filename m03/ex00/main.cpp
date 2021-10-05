#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
	ClapTrap cow("A cow");

	cow.attack("an electric fence");
	cow.takeDamage(10);
	cow.attack("grass");
	cow.beRepaired(10);
	return 0;
}

#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
	ClapTrap luffy("Luffy");
	ClapTrap cow("a cow");

	luffy.attack("a cow");
	cow.takeDamage(luffy.getAttackDamage());
	cow.beRepaired(90);
	cow.attack("luffy");
	luffy.takeDamage(cow.getAttackDamage());
	return 0;
}

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void) {
	ClapTrap luffy("Luffy");
	ScavTrap cow("the_cow");

	luffy.attack("the_cow");
	cow.takeDamage(luffy.getAttackDamage());
	cow.beRepaired(50);
	cow.attack("luffy");
	luffy.takeDamage(cow.getAttackDamage());
	cow.guardGate();
	return 0;
}


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void) {
	ClapTrap luffy("Luffy");
	ScavTrap cow("the_cow");
	FragTrap sheep("the_sheep");

	luffy.attack("the_cow");
	cow.takeDamage(luffy.getAttackDamage());
	cow.beRepaired(50);
	cow.attack("luffy");
	luffy.takeDamage(cow.getAttackDamage());
	cow.guardGate();
	sheep.attack("the_cow");
	cow.takeDamage(sheep.getAttackDamage());
	return 0;
}


#include "DiamondTrap.hpp"
#include <iostream>

static void	section( std::string title )
{
	std::cout << std::endl << "--------------- " << title << " ---------------" << std::endl;
}

int main( void ) {
	section("Cow 1");
	DiamondTrap cow("Cowcow");
	{
		cow.attack("an electric fence");
		cow.takeDamage(10);
		cow.attack("grass");
		cow.beRepaired(10);
		cow.whoAmI();
	}
	section("Cow 2");
	{
		DiamondTrap cow2(cow);
	}
	section("Cow 3");
	{
		DiamondTrap cow3;
		cow3 = cow;
	}
	section("Cow 1");
	return 0;
}


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
		cow.whoAmI();
		cow.attack("an electric fence");
		cow.takeDamage(10);
		cow.attack("grass");
		cow.beRepaired(10);
		cow.whoAmI();
	}
	section("Cow 2");
	{
		DiamondTrap cow2(cow);
		cow.whoAmI();
	}
	section("Cow 3");
	{
		DiamondTrap cow3;
		cow.whoAmI();
		cow3 = cow;
		cow.whoAmI();
	}
	section("Cow 1");
	return 0;
}

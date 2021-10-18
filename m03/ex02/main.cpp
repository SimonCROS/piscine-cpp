#include "FragTrap.hpp"
#include <iostream>

static void	section( std::string title )
{
	std::cout << std::endl << "--------------- " << title << " ---------------" << std::endl;
}

int main( void ) {
	section("Cow 1");
	FragTrap cow("A cow");
	{
		cow.attack("an electric fence");
		cow.takeDamage(10);
		cow.attack("grass");
		cow.beRepaired(10);
		cow.highFivesGuys();
	}
	section("Cow 2");
	{
		FragTrap cow2(cow);
	}
	section("Cow 3");
	{
		FragTrap cow3;
		cow3 = cow;
	}
	section("Cow 1");
	return 0;
}

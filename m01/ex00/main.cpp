#include "Zombie.hpp"

int main( void )
{
	Zombie	*zombie;

	randomChump("Thierry");
	zombie = newZombie("Richard");
	zombie->announce();
	delete zombie;
	return 0;
}

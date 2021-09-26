#include "Zombie.hpp"

int main( void )
{
	Zombie	*horde;
	int		size;

	size = 10;
	horde = zombieHorde(size, "Jean-Pierre");
	for (int i = 0; i < size; i++)
		horde[i].announce();

	delete [] horde;
	return 0;
}

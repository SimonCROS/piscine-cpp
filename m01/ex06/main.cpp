#include "Karen.hpp"

int main( int argc, char *argv[] )
{
	Karen karen;

	if (argc != 2)
		return EXIT_FAILURE;
	karen.complain(argv[1]);
	return 0;
}

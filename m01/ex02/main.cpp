#include <iostream>

int main( void )
{
	std::string base = "HI THIS IS BRAIN";

	std::string* stringPTR = &base;
	std::string& stringREF = base;

	std::cout << &base << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}

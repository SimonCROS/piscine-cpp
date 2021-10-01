#include "Fixed.hpp"
#include <iostream>

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;


	Fixed	c(100);
	Fixed	d(4);

	std::cout << c - d << std::endl;
	std::cout << c + d << std::endl;
	std::cout << c / d << std::endl;
	std::cout << c / d / d << std::endl;
	std::cout << c * d << std::endl;


	Fixed	e(42);
	Fixed	f(4.2f);
	Fixed	g(4.2f);

	std::cout << "e < f  = " << (e < f) << std::endl;
	std::cout << "e > f  = " << (e > f) << std::endl;
	std::cout << "f < g  = " << (f < g) << std::endl;
	std::cout << "f > g  = " << (f > g) << std::endl;
	std::cout << "f <= g = " << (f <= g) << std::endl;
	std::cout << "f >= g = " << (f >= g) << std::endl;
	std::cout << "f == g = " << (f == g) << std::endl;
	std::cout << "f != g = " << (f != g) << std::endl;
	std::cout << "e == g = " << (e == g) << std::endl;
	std::cout << "e != g = " << (e != g) << std::endl;
	return 0;
}

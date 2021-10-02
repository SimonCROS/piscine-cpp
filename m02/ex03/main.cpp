#include "Point.hpp"
#include <iostream>

int main(void) {
	Point p1;
	Point p2(Fixed(0.42f), Fixed(4.2f));
	Point p3(Fixed(4), Fixed(2));

	Point test1(Fixed(0.2f), Fixed(1.9f));
	Point test2(Fixed(-21), Fixed(42));

	std::cout << "Triangle : " << p1 << " " << p2 << " " << p3 << std::endl;
	std::cout << "Test " << test1 << " : " << (bsp(p1, p2, p3, test1) ? "true" : "false") << std::endl;
	std::cout << "Test " << test2 << " : " << (bsp(p1, p2, p3, test2) ? "true" : "false") << std::endl;
	return 0;
}

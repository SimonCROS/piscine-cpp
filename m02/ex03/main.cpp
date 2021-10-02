#include "Point.hpp"
#include <iostream>

int main(void) {
	Point p1;
	Point p2( 0.42f, 4.2f );
	Point p3( 4, 2 );

	Point test1( 0.2f, 1.9f );
	Point test2( -1, 0 );
	Point test3;
	Point test4( 0.01f, 0.01f );
	Point test5( 3.4f, 2 );

	std::cout << "Triangle : " << p1 << " " << p2 << " " << p3 << std::endl;
	std::cout << "Test " << test1 << " : " << (bsp(p1, p2, p3, test1) ? "true" : "false") << std::endl;
	std::cout << "Test " << test2 << " : " << (bsp(p1, p2, p3, test2) ? "true" : "false") << std::endl;
	std::cout << "Test " << test3 << " : " << (bsp(p1, p2, p3, test3) ? "true" : "false") << std::endl;
	std::cout << "Test " << test4 << " : " << (bsp(p1, p2, p3, test4) ? "true" : "false") << std::endl;
	std::cout << "Test " << test5 << " : " << (bsp(p1, p2, p3, test5) ? "true" : "false") << std::endl;
	return 0;
}

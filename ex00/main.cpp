#include <iostream>
#include "Fixed.hpp"

int main(void) {
    std::cout << "\ndefault constructor" << std::endl;
	Fixed a;
	std::cout << a.getRawBits() << std::endl;
	
	std::cout << "\ncopy constructor" << std::endl;
	Fixed b(a);
	std::cout << b.getRawBits() << std::endl;

	std::cout << "\ncopy assignment operator" << std::endl;
	Fixed c;
	c = b;
	std::cout << c.getRawBits() << std::endl;

	std::cout << "\nsetter_test" << std::endl;
	a.setRawBits(42);
	std::cout << a.getRawBits() << std::endl;

	std::cout << "\ntest end" << std::endl;
    return 0;
}


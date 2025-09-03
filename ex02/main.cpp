#include <iostream>
#include "Fixed.hpp"

int main(void) {

    Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed( 2 ) );
	Fixed c(42.2f);
	Fixed d(2);
	Fixed e(42);
	Fixed f(99);

	std::cout << "\nprint Fixed Value" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
	std::cout << f << std::endl;


	std::cout << "\n\n\ncomparison operators test\n";
	std::cout << "\nless than(<)\n";
	std::cout << (c < d) << std::endl;
    std::cout << (c < e) << std::endl;
    std::cout << (c < f) << std::endl;

	std::cout << "\ngreater than(>)\n";
    std::cout << (c > d) << std::endl;
    std::cout << (c > e) << std::endl;
	std::cout << (c > f) << std::endl;

	std::cout << "\nless than or equal to(<=)\n";
    std::cout << (c <= d) << std::endl;
    std::cout << (c <= e) << std::endl;
    std::cout << (c <= f) << std::endl;

	std::cout << "\ngreater than or equal to(>=)\n";
    std::cout << (c >= d) << std::endl;
    std::cout << (c >= e) << std::endl;
    std::cout << (c >= f) << std::endl;

	std::cout << "\nequal to(==)\n";
    std::cout << (c == d) << std::endl;
    std::cout << (c == e) << std::endl;
    std::cout << (c == f) << std::endl;

	std::cout << "\nnot equal to(!=)\n";
    std::cout << (c != d) << std::endl;
    std::cout << (c != e) << std::endl;
    std::cout << (c != f) << std::endl;

	std::cout << "\n\n\narithmetical operators test\n";
    std::cout << c + d << std::endl;
    std::cout << c - d << std::endl;
    std::cout << c * d << std::endl;
    std::cout << c / d << std::endl;

	std::cout << "\n\n\nincrement test" << std::endl;
    std::cout << a << std::endl;
	std::cout << "pre-increment: " << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << "post-increment: " << a++ << std::endl;
	std::cout << a << std::endl;


	std::cout << "\n\n\ndecrement test" << std::endl;
	std::cout << a << std::endl;
	std::cout << "pre-decrement: " << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << "post-decrement: " << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << "\nmax/min test" << std::endl;
    std::cout << Fixed::max ( c, d ) << std::endl;
    std::cout << Fixed::min ( c, d ) << std::endl;

	const Fixed g(42);
	const Fixed h(2);

	std::cout << "\nmax/min test const" << std::endl;
    std::cout << Fixed::max ( g, h ) << std::endl;
    std::cout << Fixed::min ( g, h ) << std::endl;

	std::cout << "\nend" << std::endl;
    return 0;
}


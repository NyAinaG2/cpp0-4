#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.0f) * Fixed(5));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl << std::endl;

	std::cout << (a > b) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a <= b) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl << std::endl;

	Fixed c(5.05f);
	Fixed d(5);
	std::cout << (c > d) << std::endl;
	std::cout << (c >= d) << std::endl;
	std::cout << (c < d) << std::endl;
	std::cout << (c <= d) << std::endl;
	std::cout << (c == d) << std::endl;
	std::cout << (c != d) << std::endl;
	std::cout << Fixed::max(c, d) << std::endl;
	std::cout << Fixed::max(c, d) << std::endl;
	return 0;
}
#include "Fixed.hpp"

const int Fixed::_fract = 8;

Fixed::Fixed(void) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int raw )
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw = raw << this->_fract;
}

Fixed::Fixed( const float raw )
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(raw * (1 << this->_fract));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_raw = other.getRawBits();
	return *this;
}

float	Fixed::toFloat(void)const
{
	return ((float)this->_raw / (float)(1 << this->_fract));
}

int	Fixed::toInt(void)const
{
	return (this->_raw >> this->_fract);
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

std::ostream	&operator<<(std::ostream &out, Fixed const &to_print)
{
	out << to_print.toFloat();
	return (out);
}

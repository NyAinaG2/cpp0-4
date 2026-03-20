#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int _raw;
	static const int _fract;
public:
	Fixed( void );
	Fixed( const int raw );
	Fixed( const float raw );
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed( void );
	int	getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream&	operator<<(std::ostream &out, Fixed const &to_print);

#endif
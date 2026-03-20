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
	bool operator>(const Fixed& fixed) const;
	bool operator<(const Fixed& fixed) const;
	bool operator>=(const Fixed& fixed) const;
	bool operator<=(const Fixed& fixed) const;
	bool operator==(const Fixed& fixed) const;
	bool operator!=(const Fixed& fixed) const;
	float operator+(const Fixed& fixed) const;
	float operator-(const Fixed& fixed) const;
	float operator*(const Fixed& fixed) const;
	float operator/(const Fixed& fixed) const;
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(Fixed const &f1, Fixed const &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(Fixed const &f1, Fixed const &f2);
};

std::ostream&	operator<<(std::ostream &out, Fixed const &to_print);

#endif
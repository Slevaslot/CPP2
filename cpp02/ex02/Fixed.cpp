#include "Fixed.hpp"

bool Fixed::operator>(const Fixed &t)
{
	if (this->_n > t._n)
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed &t)
{
	if (this->_n < t._n)
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed &t)
{
	if (this->_n >= t._n)
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed &t)
{
	if (this->_n <= t._n)
		return (true);
	else
		return (false);
}

bool Fixed::operator==(const Fixed &t)
{
	if (this->_n == t._n)
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed &t)
{
	if (this->_n != t._n)
		return (true);
	else
		return (false);
}

Fixed Fixed::operator+(const Fixed &t)
{
	Fixed tmp;
	tmp.setRawBits((toFloat() + t.toFloat()) * (float)(1 << _bits));

	return (tmp);
}

Fixed Fixed::operator-(const Fixed &t)
{
	Fixed tmp;
	tmp.setRawBits((toFloat() - t.toFloat()) * (float)(1 << _bits));

	return (tmp);
}

Fixed Fixed::operator*(const Fixed &t)
{
	Fixed tmp;
	tmp.setRawBits((toFloat() * t.toFloat()) * (float)(1 << _bits));

	return (tmp);
}

Fixed Fixed::operator/(const Fixed &t)
{
	Fixed tmp;
	tmp.setRawBits((toFloat() / t.toFloat()) * (float)(1 << _bits));

	return (tmp);
}

Fixed& Fixed::operator++()
{
	this->_n += 1;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->_n -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--_n;
	return (temp);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++_n;
	return (temp);
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_n = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = n << this->_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(f * (float)(1 << this->_bits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
}

Fixed& Fixed::operator=(const Fixed &t)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = t.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	int nb;

	nb = this->_n >> this->_bits;
	return (nb);
}

float Fixed::toFloat(void) const
{
	float nb;

	nb = (float)this->_n / (1 << this->_bits);
	return (nb);
}

std::ostream &operator<<(std::ostream& os, const Fixed &t)
{
	os << t.toFloat();
	return (os);
}

float Fixed::min(Fixed &t1, Fixed &t2)
{
	if (t1 < t2)
		return (t1.toFloat());
	else
		return (t2.toFloat());
}

float Fixed::max(Fixed &t1, Fixed &t2)
{
	if (t1 > t2)
		return (t1.toFloat());
	else
		return (t2.toFloat());
}

float Fixed::min(const Fixed &t1, const Fixed &t2) {
	if (t1.getRawBits() < t2.getRawBits())
		return (t1.toFloat());
	else
		return (t2.toFloat());
}

float Fixed::max(const Fixed &t1, const Fixed &t2) {
	if (t1.getRawBits() > t2.getRawBits())
		return (t1.toFloat());
	else
		return (t2.toFloat());
}

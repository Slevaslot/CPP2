#include "Fixed.hpp"

Float::Float()
{
	this->_n = 0;
}

int Float::getRawBits(void) const
{
	return (this->_n);
}

void Float::setRawBits( int const raw )
{
	this->_n = raw;
}

Float::~Float()
{

}

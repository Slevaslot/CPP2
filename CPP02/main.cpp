#include "Fixed.hpp"

int main ()
{
	Float test;
	test.setRawBits(3);
	int hey = test.getRawBits();
	std::cout << hey << std::endl;
}

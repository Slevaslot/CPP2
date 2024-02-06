# ifndef FIXED_H
#define FIXED_H

#include <string.h>
#include <sys/wait.h>
#include <math.h>
#include <iostream>

class Fixed{
	private:
		int	_n;
		const static int _bits = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed& other);
		Fixed &operator=(const Fixed &t);

		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream &operator<<(std::ostream& os, const Fixed &t);

#endif

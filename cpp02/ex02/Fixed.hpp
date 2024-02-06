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
		bool operator>(const Fixed &t);
		bool operator<(const Fixed &t);
		bool operator>=(const Fixed &t);
		bool operator<=(const Fixed &t);
		bool operator==(const Fixed &t);
		bool operator!=(const Fixed &t);
		Fixed operator+(const Fixed &t);
		Fixed operator-(const Fixed &t);
		Fixed operator*(const Fixed &t);
		Fixed operator/(const Fixed &t);
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		static float min(Fixed &t1, Fixed &t2);
		static float min(const Fixed &t1, const Fixed &t2);
		static float max(Fixed &t1, Fixed &t2);
		static float max(const Fixed &t1, const Fixed &t2);

};
std::ostream &operator<<(std::ostream& os, const Fixed &t);

#endif

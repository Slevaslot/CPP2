#include <string.h>
#include <sys/wait.h>
#include <math.h>
#include <iostream>

class Float{
	private:
		int	_n;
		const static int _bits = 8;
	public:
		Float();
		Float(const Float& other);
		Float &operator=(const Float &t);
		~Float();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#include "AMateria.hpp"

class IMateriaSource
{
	protected:
		AMateria *_storage[4];
	public:
	IMateriaSource();
	IMateriaSource(IMateriaSource &t);
	IMateriaSource& operator=(const IMateriaSource &t);
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

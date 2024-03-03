
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected :
	AMateria *_matstorage[4];
	public:
	~MateriaSource();
	MateriaSource();
	MateriaSource(MateriaSource &t);
	MateriaSource& operator=(const MateriaSource &t);
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

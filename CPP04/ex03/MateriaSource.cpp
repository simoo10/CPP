#include"MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
    //std::cout << "MateriaSource default constructor is called" << std::endl;
    for(int i = 0; i < 4; i++)	{
		reserve[i] = NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource const & obj )
{
    *this = obj;
    //std::cout << "MateriaSource copy constructor is called" << std::endl;
}

MateriaSource&   MateriaSource::operator=( const MateriaSource& obj ) {
	if(this!=&obj)
	{
		for(int i = 0; i < 4; i++)
		{
			if (obj.reserve[i])
				reserve[i] = obj.reserve[i]->clone();
			else
				reserve[i] = NULL;
		}
	}
	return (*this);
}
void MateriaSource::learnMateria(AMateria* material)	{
	for(int i = 0; i < 4; i++)	{
		if (!this->reserve[i]){
			this->reserve[i] = material->clone();
			delete material;
			return;
		}		
	}
	delete material;
}

AMateria*	MateriaSource::createMateria(std::string const & type)	{
	for(int i = 0; i < 4; i++)	{
		if (reserve[i] && reserve[i]->getType() == type)
			return (reserve[i]->clone());
	}
	return (0);
}
MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)	{
		if (reserve[i])
			delete reserve[i];
	}
}
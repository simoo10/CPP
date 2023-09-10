#include"MateriaSource.hpp"

MateriaSource::MateriaSource() //: AMateria("ice")
{
    //std::cout << "MateriaSource default constructor is called" << std::endl;
    for(int i = 0; i < 4; i++)	{
		stock[i] = NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource const & obj )// : AMateria("ice")
{
    *this = obj;
    //std::cout << "MateriaSource copy constructor is called" << std::endl;
}

MateriaSource&   MateriaSource::operator=( const MateriaSource& obj ) {
	for(int i = 0; i < 4; i++)	{
		if (obj.stock[i])
			stock[i] = obj.stock[i]->clone();
		else
			stock[i] = NULL;
	}
	return (*this);
}
void MateriaSource::learnMateria(AMateria* mat)	{
	for(int i = 0; i < 4; i++)	{
		if (!this->stock[i]){
			this->stock[i] = mat->clone();
			delete mat;
			return;
		}		
	}
	delete mat;
}

AMateria*	MateriaSource::createMateria(std::string const & type)	{
	for(int i = 0; i < 4; i++)	{
		if (stock[i] && stock[i]->getType() == type)
			return (stock[i]->clone());
	}
	return (0);
}
MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)	{
		if (stock[i])
			delete stock[i];
	}
}
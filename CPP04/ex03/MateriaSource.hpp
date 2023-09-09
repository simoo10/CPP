#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include"ImateriaSource.hpp"

class MateriaSource:public IMateriaSource{
    private:
		AMateria	*stock[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator=(const MateriaSource& obj);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif
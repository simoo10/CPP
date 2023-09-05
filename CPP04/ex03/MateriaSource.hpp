#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include"ICharacter.hpp"
#include"ImateriaSource.hpp"

class MateriaSource:public IMateriaSource{
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator=(const MateriaSource& obj);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif
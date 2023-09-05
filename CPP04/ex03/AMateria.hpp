#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include"ICharacter.hpp"
#include"Character.hpp"
class AMateria{
    protected:
        std::string _type;
    public:
        AMateria();
        ~AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& obj);
        AMateria& operator=(const AMateria& obj);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
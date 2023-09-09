#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include"AMateria.hpp"

class Character:public ICharacter{
    private:
        std::string name;
        AMateria *inventory[4];
        AMateria *save[4];
    public:
        Character();
        ~Character();
        Character(std::string _name);
        Character(const Character& obj);
        Character& operator=(const Character& obj);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
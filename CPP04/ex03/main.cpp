
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
<<<<<<< HEAD
#include <cstdlib>
=======

>>>>>>> origin/main
int main()
{
std::cout<<"----------------------TEST FROM SUBJECT-------------------------------------"<<std::endl;
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
<<<<<<< HEAD
    delete(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete(tmp);
=======
    tmp = src->createMateria("cure");
    me->equip(tmp);
>>>>>>> origin/main
    ICharacter* bob = new Character("bob");
    *bob = *me;
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}
std::cout<<"----------------------TEST WITH UNIQUIPING MATERIA---------------------------"<<std::endl;
{
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("monster");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
<<<<<<< HEAD
    delete(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete(tmp);
=======
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
>>>>>>> origin/main
    ICharacter* bob = new Character("hulk");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    delete bob;
<<<<<<< HEAD
    delete me;
    delete src;
}
=======
    delete src;
}
//system("leaks materia");
>>>>>>> origin/main
}

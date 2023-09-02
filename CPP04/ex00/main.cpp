
#include"Dog.hpp"
#include"Cat.hpp"
#include"Wrong.hpp"
int main()
{
    {
         Animal* meta = new Animal();
 Animal* j = new Dog();
 Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
        delete meta;
        delete i;
        delete j;
    }
    std::cout<<"------------wrong animal part-------------"<<std::endl;
    {
        WrongAnimal* meta = new WrongAnimal();
        WrongAnimal* i = new WrongCat();
        std::cout << meta->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        meta->makeSound();
        delete meta;
        delete i;
    }
}

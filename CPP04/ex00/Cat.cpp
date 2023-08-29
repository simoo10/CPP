#include"Cat.hpp"

Cat::Cat()
{
    std::cout<<"constructor of Cat called"<<std::endl;
    _type = "Cat";
}
Cat::Cat(const Cat& obj):Animal(obj)
{
    *this = obj;
}
Cat& Cat::operator=(const Cat& obj)
{
    if(this != &obj)
    {
        _type = obj._type;
    }
    return(*this);
}
void Cat::makeSound()
{
    std::cout<<"Meow Meow Meow Meow!!"<<std::endl;
}
Cat::~Cat()
{
    std::cout<<"Destructor of Cat called"<<std::endl;
}
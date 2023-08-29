#include"Dog.hpp"

Dog::Dog()
{
    std::cout<<"constructor of Dog called"<<std::endl;
    _type = "Dog";
}
Dog::Dog(const Dog& obj):Animal(obj)
{
    *this = obj;
}
Dog& Dog::operator=(const Dog& obj)
{
    if(this != &obj)
    {
        _type = obj._type;
    }
    return(*this);
}
void Dog::makeSound()
{
    std::cout<<"how how how how how how!!"<<std::endl;
}
Dog::~Dog()
{
    std::cout<<"Destructor of Dog called"<<std::endl;
}
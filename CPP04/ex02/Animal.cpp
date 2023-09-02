#include"Animal.hpp"

Animal::Animal()
{
    std::cout<<"constructor of Animal called"<<std::endl;
    _type = "Unkown Animal";
}
Animal::Animal(const Animal& obj)
{
     std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
}
Animal& Animal::operator=(const Animal& obj)
{
    std::cout<<"copy assignament of animal called"<<std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return(*this);
}
void Animal::makeSound() const
{
    std::cout<<"Animal sound!!(no specific animal)"<<std::endl;
}
std::string Animal::getType() const
{
    return(_type);
}
Animal::~Animal()
{
    std::cout<<"Destructor of Animal called"<<std::endl;
}
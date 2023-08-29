#include"Animal.hpp"

Animal::Animal()
{
    std::cout<<"constructor of Animal called"<<std::endl;
    _type = "Unkown Animal";
}
Animal::Animal(const Animal& obj)
{
    *this = obj;
}
Animal& Animal::operator=(const Animal& obj)
{
    if(this != &obj)
    {
        _type = obj._type;
    }
    return(*this);
}
void Animal::makeSound()
{
    std::cout<<"Animal sound!!(no specific animal)"<<std::endl;
}
std::string Animal::getType()
{
    return(_type);
}
Animal::~Animal()
{
    std::cout<<"Destructor of Animal called"<<std::endl;
}
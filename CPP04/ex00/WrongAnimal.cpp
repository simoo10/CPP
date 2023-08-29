#include"Wrong.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"constructor of WrongAnimal called"<<std::endl;
    _type = "Unkown Animal";
}
WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    *this = obj;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    if(this != &obj)
    {
        _type = obj._type;
    }
    return(*this);
}
void WrongAnimal::makeSound()
{
    std::cout<<"Animal sound!!(no specific animal)"<<std::endl;
}
std::string WrongAnimal::getType()
{
    return(_type);
}
WrongAnimal::~WrongAnimal()
{
    std::cout<<"Destructor of WrongAnimal called"<<std::endl;
}

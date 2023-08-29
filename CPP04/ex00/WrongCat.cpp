#include"Wrong.hpp"

WrongCat::WrongCat()
{
    std::cout<<"constructor of WrongCat called"<<std::endl;
    _type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat& obj):WrongAnimal(obj)
{
    *this = obj;
}
WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    if(this != &obj)
    {
        _type = obj._type;
    }
    return(*this);
}
void WrongCat::makeSound()
{
    std::cout<<"Meow Meow Meow Meow!!"<<std::endl;
}
WrongCat::~WrongCat()
{
    std::cout<<"Destructor of WrongCat called"<<std::endl;
}

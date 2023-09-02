#include"Dog.hpp"

Dog::Dog()
{
    std::cout<<"constructor of Dog called"<<std::endl;
   _Brain = new Brain();
    _type = "Dog";
}
Dog::Dog(const Dog& obj):Animal(obj)
{
    *this = obj;
}
Dog& Dog::operator=(const Dog& obj)
{
    std::cout<<"copy assignament of Dog called"<<std::endl;
    if(this != &obj)
    {
        _type = obj._type;
        _Brain = new Brain(*obj._Brain);
    }
    return(*this);
}
void Dog::makeSound() const
{
    std::cout<<"how how how how how how!!"<<std::endl;
}
Dog::~Dog()
{
   delete _Brain;
    std::cout<<"Destructor of Dog called"<<std::endl;
}
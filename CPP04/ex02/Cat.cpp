#include"Cat.hpp"

Cat::Cat()
{
    std::cout<<"constructor of Cat called"<<std::endl;
   _Brain= new Brain();
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
  _Brain = new Brain(*obj._Brain);
    }
    return(*this);
}
void Cat::makeSound() const
{
    std::cout<<"Meow Meow Meow Meow!!"<<std::endl;
}
Cat::~Cat()
{
 delete _Brain;
    std::cout<<"Destructor of Cat called"<<std::endl;
}
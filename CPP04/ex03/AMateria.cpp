#include"AMateria.hpp"

AMateria::AMateria()
{
    std::cout<<"default constructor of AMateria called"<<std::endl;
}
AMateria::~AMateria()
{
    std::cout<<"destructor of AMateria called"<<std::endl;
}
AMateria::AMateria(const AMateria& obj)
{
    std::cout<<"copy constructor of AMateria called"<<std::endl;
    *this = obj;
}
AMateria& AMateria::operator=(const AMateria& obj)
{
    std::cout<<"copy assignament of AMateria called"<<std::endl;
    if(this!= &obj)
        _type = obj._type;
}
AMateria::AMateria(std::string const & type)
{
    _type = type;
}
std::string const & AMateria:: getType() const
{
    return(_type);
}

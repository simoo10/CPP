#include"Weapon.hpp"
Weapon::Weapon()
{
    
}
Weapon::Weapon(std::string _type)
{
    type = _type;
}
Weapon::~Weapon()
{

}

void Weapon:: setType(std::string _type)
{
    type = _type;
}
const std::string& Weapon:: getType() const
{
    return (type);
}

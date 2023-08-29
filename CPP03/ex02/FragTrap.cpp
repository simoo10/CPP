#include"FragTrap.hpp"
FragTrap::FragTrap()
{
}
FragTrap::FragTrap(const FragTrap& obj):ClapTrap(obj)
{
    *this = obj;
}
FragTrap& FragTrap::operator=(const FragTrap& obj)
{
     if(this!= &obj)
    {
        hit_pt = obj.hit_pt;
        damage = obj.energy_pt;
        energy_pt =obj.energy_pt;
        _name = obj._name;
    }
    return(*this);
}
FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout<<"Constructor of FragTrap called"<<std::endl;
    hit_pt =100;
    energy_pt= 100;
    damage= 30;
}
FragTrap::~FragTrap()
{
    std::cout<<"Destructor of FragTrap called"<<std::endl;
}

void FragTrap::highFivesGuys()
{
std::cout<<"FragTrap "<<_name<<" is a positive high fives"<<std::endl;
}

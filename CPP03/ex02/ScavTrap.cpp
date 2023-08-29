#include"ScavTrap.hpp"
ScavTrap::ScavTrap()
{
}
ScavTrap::ScavTrap(const ScavTrap& obj):ClapTrap(obj)
{
    *this = obj;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
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
ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout<<"Constructor of ScavTrap called"<<std::endl;
    hit_pt =100;
    energy_pt= 50;
    damage= 20;
}
ScavTrap::~ScavTrap()
{
    std::cout<<"Destructor of ScavTrap called"<<std::endl;
}
void ScavTrap::attack(const std::string& target)
{
      if(hit_pt<=0)
        std::cout<<"ScavTrap "<<_name<<" has died!"<<std::endl;
    else if(energy_pt<0)
        std::cout<<"ScavTrap "<<_name<<" has not enough energy!!"<<std::endl;
    else
    {
        std::cout<<"ScavTrap "<<_name<<" attacks "<<target<<",";
        std::cout<<" causing "<<damage<<" point of damage"<<std::endl;
    }
    energy_pt -= 1;
    std::cout<<"HIT POINT :"<<hit_pt<<std::endl;
    std::cout<<"ENERGY POINT :"<<energy_pt<<std::endl;
}
void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap is now in Gate keeper mode"<<std::endl;
}
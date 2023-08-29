#include"ClapTrap.hpp"
ClapTrap::ClapTrap()
{

}
ClapTrap::ClapTrap(std::string name)
{
    hit_pt = 10;
    energy_pt =10;
    damage  =0;
    std::cout<<"constructor of claptrap called"<<std::endl;
    _name = name;
}
ClapTrap::ClapTrap(const ClapTrap& obj)
{
    *this = obj;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
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
ClapTrap::~ClapTrap()
{
    std::cout<<"destructor of claptrap called"<<std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if(hit_pt<=0)
        std::cout<<_name<<" has died!"<<std::endl;
    else if(energy_pt<0)
        std::cout<<_name<<" has not enough energy!!"<<std::endl;
    else
    {
        std::cout<<"ClapTrap "<<_name<<" attacks "<<target<<",";
        std::cout<<" causing "<<damage<<" point of damage"<<std::endl;
    }
    energy_pt -= 1;
    std::cout<<"HIT POINT :"<<hit_pt<<std::endl;
    std::cout<<"ENERGY POINT :"<<energy_pt<<std::endl;
}
void ClapTrap:: takeDamage(unsigned int amount)
{
    if(hit_pt<=0)
        std::cout<<_name<<" has died!"<<std::endl;
    else if(energy_pt<0)
        std::cout<<_name<<" has not enough energy!!"<<std::endl;
    else
        std::cout<<_name<<" take "<<amount<<" of damage"<<std::endl;
    hit_pt -= amount;
    std::cout<<"HIT POINT :"<<hit_pt<<std::endl;
    std::cout<<"ENERGY POINT :"<<energy_pt<<std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(hit_pt<=0)
        std::cout<<_name<<" has died!"<<std::endl;
    else if(energy_pt<0)
        std::cout<<_name<<" has not enough energy!!"<<std::endl;
    else
        std::cout<<"ClapTrap "<<_name<<" repairs itself"<<std::endl;
    energy_pt -=1;
    hit_pt += amount;
    std::cout<<"HIT POINT :"<<hit_pt<<std::endl;
    std::cout<<"ENERGY POINT :"<<energy_pt<<std::endl;
}
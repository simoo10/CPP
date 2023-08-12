#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &wepon)
	: name(_name), wep(wepon)
{

}

HumanA ::~HumanA()
{
	std::cout << "HUMAN A DONE" << std::endl;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << wep.getType() << std::endl;
}
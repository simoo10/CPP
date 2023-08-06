#include "HumanB.hpp"
HumanB::HumanB()
{
}
HumanB ::HumanB(std::string _name)
{
	name = _name;
	wep = NULL;
}
HumanB ::~HumanB()
{
	std::cout << "HUMAN B DONE" << std::endl;
}

void HumanB::attack()
{
	if (wep == NULL)
	{
		std::cout << name << " has no weapon to attack his ennemy!" << std::endl;
	}
	else
		std::cout << name << " attacks with their " << wep->getType() << std::endl;
}
void HumanB ::setWeapon(Weapon &wepon)
{
	wep = &wepon;
}

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zom=newZombie("Zombie1");
	zom->announce();
	randomChump("Zombie2");
	delete zom;
}
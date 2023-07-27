#include "Zombie.hpp"

int	main(int c, char **v)
{
	if (c != 3)
		std::cout << "please enter the number and the name of the zombie" << std::endl;
	Zombie *zom;
	zom = zombieHorde(atoi(v[1]), v[2]);
	for (int i = 0; i < atoi(v[1]); i++)
		zom[i].announce();
	delete[] zom;
}
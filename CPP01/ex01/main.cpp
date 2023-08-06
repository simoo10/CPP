#include "Zombie.hpp"

int	main(int c, char **v)
{
	if (c != 3)
	{
		std::cout << "please enter the number and the name of the zombie[v1=NUMBER][v2=string]" << std::endl;
		exit(1);
	}
	if (atoi(v[1]) <= 0)
	{
		std::cout << "the first argument negative or not an digit,try again" << std::endl;
		exit(1);
	}
	Zombie *zom;
	zom = zombieHorde(atoi(v[1]), v[2]);
	for (int i = 0; i < atoi(v[1]); i++)
		zom[i].announce();
	delete[] zom;
}
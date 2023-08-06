#include "Zombie.hpp"

Zombie ::Zombie()
{
}
Zombie::Zombie(std::string name)
{
	_name = name;
}
Zombie::~Zombie()
{
	std::cout << _name << "-------Zombie died-------" << std::endl;
}
void Zombie::announce()
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie ::setname(std::string name)
{
	_name = name;
}
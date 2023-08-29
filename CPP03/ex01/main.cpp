#include"ScavTrap.hpp"

int main()
{
    ScavTrap clap1("Monster");
    clap1.attack("his ennemy");
    clap1.takeDamage(8);
    clap1.beRepaired(4);
    clap1.takeDamage(7);
    clap1.guardGate();
    clap1.attack("his ennemy");
}
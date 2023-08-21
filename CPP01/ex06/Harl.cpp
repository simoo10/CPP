#include "Harl.hpp"
Harl::Harl()
{
}
Harl::~Harl()
{
}
void Harl::complain(std::string level)
{
	int	i;

	i = 0;
	std::string nv[4];
	nv[0] = "DEBUG";
	nv[1] = "INFO";
	nv[2] = "WARNING";
	nv[3] = "ERROR";
	while (i < 4)
	{
		if (nv[i] == level)
		{
			while(i<4)
			{
			switch (i)
			{
			case 0:
				debug();
				break;
			case 1:
				info();
				break;
			case 2:
				warning();
				break;
			case 3:
				error();
				break ;
			}
			i++;
			}
			return ;
		}
		i++;
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}
void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn’t putenough bacon in my burger !";
	std::cout << "If you did,I wouldn’t be asking for more !" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been comingfor years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
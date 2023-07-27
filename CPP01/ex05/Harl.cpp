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
	void (Harl::*lvl[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string nv[] = {
		"debug",
		"info",
		"warning",
		"error",
	};
	while (i < 4)
	{
		if (nv[i] == level)
		{
			(this->*lvl[i])();
			return ;
		}
		i++;
	}
	std::cout << "---I DON'T KNOW ANYTHING FOR THIS LEVEL---" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn’t putenough bacon in my burger !";
	std::cout << "If you did,I wouldn’t be asking for more !" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been comingfor years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
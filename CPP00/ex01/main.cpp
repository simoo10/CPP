#include "main.hpp"

int	main(void)
{
	PhoneBook rep;
	std ::string cmd;
	std::string space(10, ' ');
	while (1)
	{
		std::cout << "ENTREZ VOTRE COMMANDE: ";
		getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << "end od file" << std::endl;
			exit(1);
		}
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
			rep.add_contact();
		else if (cmd == "SEARCH")
			rep.search_contact();
		else
			std::cout << "Error!command not found" << std::endl;
	}
}
#include "main.hpp"

int	main(void)
{
	PhoneBook	rep;

	std ::string cmd;
	while (1)
	{
		std::cout << "[ENTER ONE OF THE FOLLOWING COMMANDS:" << std::endl;
		std::cout << " 			{--ADD--|--SEARCH--|--EXIT--}		" << std::endl;
		std::cout << "SET THE COMMAND: "<<std::endl;
		getline(std::cin, cmd);
		if (std::cin.eof())
			exit(1);
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

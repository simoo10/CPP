#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	count = -1;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::add_contact()
{
	if (count < MAX - 1)
	{
		count++;
		contact[count].save_contact(count);
	}
	else
	{
		for (int i = 0; i < MAX - 1; i++)
		{
			contact[i] = contact[i + 1];
			contact[i].update_index(i);
		}
		contact[count].save_contact(count);
	}
}
void PhoneBook::search_contact()
{
	int	ind;

	std::string index;
	ind = 0;
	if (count == -1)
	{
		std::cout << "YOUR REP IS EMPTY!" << std::endl;
		return ;
	}
	std::cout << "     INDEX|FIRST NAME|LAST NAME |  NICKNAME" << std::endl;
	for (int i = 0; i <= count; i++)
		contact[i].show_contacts();
	std::cout << "ENTER THE INDEX OF CONTACT WOULD YOU SEE: ";
	while (ind <= 0 || ind > count + 1 || index.length() != 1)
	{
		std::getline(std::cin, index);
		if (std::cin.eof())
			exit(1);
		ind = atoi(index.c_str());
		if (ind <= 0 || ind > count + 1 || index.length() != 1)
			std::cout << "try with index that exist: ";
	}
	contact[ind - 1].find_contact();
}

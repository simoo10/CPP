#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	count = 0;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::add_contact()
{
	if (count < MAX)
	{
		count++;
		contact[count].save_contact(count);
	}
	else
	{
		for (int i = 1; i < MAX; i++)
		{
			contact[i] = contact[i + 1];
			contact[i].update_index(i);
		}
		contact[count].save_contact(count);
	}
}
// int	str_to_integer(std::string str)
// {
// 	int	i;
// 	int	index;

// 	index = 0;
// 	i = 0;
// 	while (str[i] && str[i] >= '0' && str[i] <= '9')
// 	{
// 		index = 10 * index + str[i] - '0';
// 		i++;
// 	}
// 	if (str[i])
// 		return (-1);
// 	return (index);
// }
void PhoneBook::search_contact()
{
	int	ind;

	std::string index;
	ind = 0;
	std::cout << count << std::endl;
	if (count == 0)
	{
		std::cout << "YOUR REP IS EMPTY!" << std::endl;
		return ;
	}
	std::cout << "     INDEX|FIRST NAME|LAST NAME |  NICKNAME" << std::endl;
	for (int i = 1; i <= count; i++)
		contact[i].show_contacts();
	std::cout << "ENTER THE INDEX OF CONTACT WOULD YOU SEE: ";
	while (ind <= 0 || ind > count)
	{
		std::getline(std::cin, index);
		ind = atoi(index.c_str());
		if (ind <= 0 || ind > count)
			std::cout << "try with index that exist: ";
	}
	contact[ind].find_contact();
}

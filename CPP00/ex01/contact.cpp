
#include "main.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}
void Contact ::save_contact(int cpt)
{
	std::cout << "Please fill this information:" << std::endl;
	std::getline(std::cin, first_name);
	while (first_name.empty())
	{
		std::cout << "fill the information:" << std::endl;
		std::cout << "first_name: ";
		std::getline(std::cin, first_name);
	}
	std::cout << "last_name: ";
	std::getline(std::cin, last_name);
	while (last_name.empty())
	{
		std::cout << "fill the information:" << std::endl;
		std::cout << "last_name: ";
		std::getline(std::cin, last_name);
	}
	std::cout << "nickname: ";
	std::getline(std::cin, nickname);
	while (nickname.empty())
	{
		std::cout << "fill the information:" << std::endl;
		std::cout << "nickname: ";
		std::getline(std::cin, nickname);
	}
	std::cout << "tel_num: ";
	std::getline(std::cin, tel_num);
	while (tel_num.empty())
	{
		std::cout << "fill the information:" << std::endl;
		std::cout << "tel_num: ";
		std::getline(std::cin, tel_num);
	}
	std::cout << "dark_secret: ";
	std::getline(std::cin, dark_secret);
	while (dark_secret.empty())
	{
		std::cout << "fill the information:" << std::endl;
		std::cout << "dark_secret: ";
		std::getline(std::cin, dark_secret);
	}
	if (std::cin.eof())
	{
		std::cout << "end od file" << std::endl;
		exit(1);
	}
	id = cpt;
}

void	print_str(std::string str)
{
	int	len;

	std::string space(10, ' ');
	len = str.length();
	if (len < 10)
		std::cout << space.substr(0, 10 - len) << str;
	else
		std::cout << str.substr(0, 9) << '.';
}

void Contact::show_contacts()
{
	std::cout << "         " << id << "|";
	print_str(first_name);
	std::cout << "|";
	print_str(last_name);
	std::cout << "|";
	print_str(nickname);
	std::cout << std::endl;
}
void Contact::find_contact()
{
	std::cout << "First_Name====>> " << first_name << std::endl;
	std::cout << "Last_Name=====>> " << last_name << std::endl;
	std::cout << "Nickname======>> " << nickname << std::endl;
	std::cout << "Tel_Num=======>> " << tel_num << std::endl;
	std::cout << "Dark_secret===>> " << dark_secret << std::endl;
}
void Contact::update_index(int ind)
{
	id = ind;
}
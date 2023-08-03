
#include "main.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}
void	print_info(std::string message)
{
	std::cout << "fill the information:" << std::endl;
	std::cout << message;
}

int	check_space(std::string info)
{
	int	i;

	i = 0;
	while (info[i])
	{
		if (std::isspace(info[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
void Contact ::save_contact(int cpt)
{
	print_info("first_name:");
	std::getline(std::cin, first_name);
	if (std::cin.eof())
		exit(1);
	while (first_name.empty() || check_space(first_name))
	{
		print_info("first_name: ");
		std::getline(std::cin, first_name);
		if (std::cin.eof())
			exit(1);
	}
	std::cout << "last_name: ";
	std::getline(std::cin, last_name);
	if (std::cin.eof())
		exit(1);
	while (last_name.empty() || check_space(last_name))
	{
		print_info("last_name: ");
		std::getline(std::cin, last_name);
		if (std::cin.eof())
			exit(1);
	}
	std::cout << "nickname: ";
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		exit(1);
	while (nickname.empty() || check_space(nickname))
	{
		print_info("nickname: ");
		std::getline(std::cin, nickname);
		if (std::cin.eof())
			exit(1);
	}
	std::cout << "tel_num: ";
	std::getline(std::cin, tel_num);
	if (std::cin.eof())
		exit(1);
	while (tel_num.empty() || check_space(tel_num))
	{
		print_info("tel_num: ");
		std::getline(std::cin, tel_num);
		if (std::cin.eof())
			exit(1);
	}
	std::cout << "dark_secret: ";
	std::getline(std::cin, dark_secret);
	if (std::cin.eof())
		exit(1);
	while (dark_secret.empty() || check_space(dark_secret))
	{
		print_info("dark_secret: ");
		std::getline(std::cin, dark_secret);
		if (std::cin.eof())
			exit(1);
	}
	id = cpt + 1;
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
	id = ind + 1;
}

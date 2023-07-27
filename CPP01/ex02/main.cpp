#include <iostream>

int	main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *p = &s;
	std::string &ref = *p;

	std::cout << "---------L'adresse des variables---------" << std::endl;
	std::cout << &s << std::endl;
	std::cout << &p << std::endl;
	std::cout << &ref << std::endl;
	std::cout << "---------La valeur des variables---------" << std::endl;
	std::cout << s << std::endl;
	std::cout << *p << std::endl;
	std::cout << ref << std::endl;
}

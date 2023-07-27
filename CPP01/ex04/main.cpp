#include "edition.hpp"

int	main(int c, char **v)
{
	if (c != 4)
	{
		std::cout << "please enter all the arguments needed" << std::endl;
		exit(0);
		std::cout << "coutqw";
	}
	else
	{
		Edit ed(v[1], v[2], v[3]);
		ed.read_file(v[1]);
	}
}
#include "Harl.hpp"

int	main(int c, char **v)
{
	if (c != 2)
	{
		std::cout << "PLEASE SET ONE LEVEL BETWEEN{debug,info,warning,error}" << std::endl;
		exit(1);
	}
	Harl h;
	h.complain(v[1]);
	// h.complain("info");
	// h.complain("warning");
	// h.complain("error");
}
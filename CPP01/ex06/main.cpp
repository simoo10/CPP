#include "Harl.hpp"

int	main(int c, char **v)
{
	if (c != 2)
	{
		std::cout << "PLEASE SET ONE ARGUMENT BETWEEN{debug,info,warning,error}" << std::endl;
		return(1);
	}
	Harl h;
	h.complain(v[1]);
}
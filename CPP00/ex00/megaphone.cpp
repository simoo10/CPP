#include <iostream>

char	*lower_to_upper(char *s)
{
	int	i;

	for (i = 0; i < strlen(s); i++)
		s[i] = toupper(s[i]);
	return (s);
}

int	main(int ac, char **v)
{
	int	i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		for (i = 1; i < ac; i++)
			std::cout << lower_to_upper(v[i]);
	std::cout << std::endl;
}

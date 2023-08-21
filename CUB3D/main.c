#include"cub3d.h"


size_t	ft_strlen(char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

void map_name(char *map)
{
    char *s;
    int i;
	int j;

	s = ".cub";
	j = 0;
	i = ft_strlen(map) - 4;
	while (s[j] && map[i])
	{
		if (s[j] != map[i])
		{
			printf("ERROR!INCORRECT MAP NAME!");
			exit(1);
		}
		i++;
		j++;
	}
}

int main(int c,char **v)
{
    if(c!=2)
	{
        printf("PLEASE SET ONLY THE MAP NAME\n");
		exit(0);
	}
	map_name(v[1]);
}

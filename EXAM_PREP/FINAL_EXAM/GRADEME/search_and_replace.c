#include<unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main (int argc, char **argv)
{
	if (argc == 4)
	{
		int i = 0;
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]))
		{
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	
}

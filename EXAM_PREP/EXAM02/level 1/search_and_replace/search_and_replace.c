#include<unistd.h>
#include<stdio.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return (len);
}

int main (int argc, char **argv)
{
	int i;
	if (argc == 4)
	{
		i = 0;
	 	while (argv[1][i])
	 	{
			if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
			{
				if (argv[1][i] == argv[2][0])
				{
					argv[1][i] = argv[3][0];
				}
				write(1, &argv[1][i], 1);
			}
			i++;
		 }
	}
	write(1, "\n", 1);
}

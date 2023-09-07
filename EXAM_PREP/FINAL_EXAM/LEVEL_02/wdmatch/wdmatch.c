#include<unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int wdm = 0;
		int j = 0;
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					wdm++;
					break;
				}
				j++;
			}
			i++;
		}
		if (ft_strlen(argv[1]) == wdm)
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}

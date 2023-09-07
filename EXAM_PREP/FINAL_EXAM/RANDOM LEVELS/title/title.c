#include<unistd.h>

void title(char *str)
{
		int i = 0;
		while (str[i])
		{
			if (i == 0)
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;

			if (str[i - 1] == ' ' || str[i - 1] == '\t')
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			i++;
		}
		write(1, str, i);
		write(1, "\n", 1);
}

int main (int ac, char **av)
{
	if (ac == 2)
		title(av[1]);
	else
		write(1, "\n", 1);
}

#include<unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
        if (argc == 2)
        {
                int i = 0;
                while (argv[1][i])
                {
                        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                                argv[1][i] -= 32;
                        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                                argv[1][i] += 32;
                        i++;
                }
		ft_putstr(argv[1]);

        }
        write(1, "\n", 1);
}


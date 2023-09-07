#include<unistd.h>

void ptstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int  i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] += 13;
			else if (argv[1][i] >=  'A' && argv[1][i] <= 'M')
				argv[1][i] += 13;
			else if (argv[1][i] > 'm' && argv[1][i] <= 'z')
				argv[1][i] -= 13;
			else if (argv[1][i] >  'M' && argv[1][i] <= 'Z')
				argv[1][i] -= 13;
			i++;
		}
		ptstr(argv[1]);
	}
	write(1, "\n", 1);
}

#include<unistd.h>

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			write(1, &argv[1][i--], 1);
		}
	}
	write(1, "\n" , 1);
}

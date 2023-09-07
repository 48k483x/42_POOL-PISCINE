#include<unistd.h>

int main (int argc, char **argv)
{
	int i = 0 , j =  argc - 1;
	if (argc > 1)
	{
		while (argv[j][i])
			i++;
		write(1, argv[j], i);
	}
	write(1, "\n", 1);
}

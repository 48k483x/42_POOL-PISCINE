#include<unistd.h>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int l_av = argc - 1;
		int i = 0;
		while (argv[l_av][i])
			i++;
		write(1, argv[l_av], i);
	}
	write(1, "\n", 1);
}

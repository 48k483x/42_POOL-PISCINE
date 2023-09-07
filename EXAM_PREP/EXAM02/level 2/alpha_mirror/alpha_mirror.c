#include<unistd.h>

int main (int argc, char **argv)
{
	int i;
	if(argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
					argv[1][i] = 'z' - (argv[1][i] - 'a');
				else
					argv[1][i] = 'Z' - (argv[1][i] - 'A');
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}	
}

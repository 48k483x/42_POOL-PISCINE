#include<unistd.h>

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, &argv[1][i], 1);
				break;
			}
			i++;
		}
		write(1, "\n", 1);		
	}
	else
		write(1, "a\n", 2);
	return 0;
}

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char  **argv)
{
	if (argc == 4)
	{
		int n1 = atoi(argv[3]);
		int n2 = atoi(argv[1]);

		if (argv[2][0] == '+')
			printf("%d", n1 + n2);
		if (argv[2][0] == '-')
			printf("%d", n1 - n2);
		if (argv[2][0] == '/')
			printf("%d", n1 / n2);
		if (argv[2][0] == '*')
			printf("%d", n1 * n2);
		else
			printf("%d", n1 % n2);
		printf("\n");
	}
	else
		printf("\n");
}

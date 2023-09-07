#include<unistd.h>

int check_dub(char *str, char s, int positio)
{
	int i = 0;
	while (i < positio)
	{
		if (str[i] == s)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	
}

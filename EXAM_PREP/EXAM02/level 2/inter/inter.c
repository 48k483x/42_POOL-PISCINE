#include<unistd.h>

int	double_check(char *str, char s, int positio)
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

void	inter(char *s1, char *s2)
{
	int i = 0;
	int j;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				if (double_check(s1, s1[i], i))
				{
					write(1, &s1[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
}

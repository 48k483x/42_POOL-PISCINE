#include<unistd.h>

int first_check(char *str, char s, int positio)
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

int second_check(char *str, char s)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == s)
			return (0);
		i++;
	}
	return (1);
}

void unionox(char *s1, char *s2)
{
	int i= 0;
	while (s1[i])
	{
		if (first_check(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (second_check(s1, s2[i]) == 1)
			if (first_check(s2, s2[i], i) == 1)
				write(1, &s2[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		unionox(argv[1], argv[2]);
	write(1, "\n", 1);
}

#include<stdio.h>

int	ft_atoi(const char *str)
{
	int na9iss = 1;
	int nums = 0;
	int i = 0;
	
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		na9iss *= -1;
	else if (str[i] == '+')
		i++;
	i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nums *= 10;
		nums += str[i] - 48;
		i++;
	}
	return (na9iss * nums);
}

int main()
{
	char number[] = "    -54494";
	char num2[] = "  + + +--94843858";
	printf("%i\n" ,ft_atoi(number));
	printf("%i\n", ft_atoi(num2));
}

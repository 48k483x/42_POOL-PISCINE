int ft_atoi(const char *str)
{
	int i = 0;
	int num = 0;
	int sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	       sign *= -1;
	else if (str[i] == '+')
		i++;
	i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10;
		num += str[i] - 48;
		i++;
	}
	return (num * sign);
}

#include<stdio.h>
int main()
{
	char str[] = "--5234" ;
	printf("%i\n", ft_atoi(str));
}

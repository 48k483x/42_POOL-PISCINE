#include<unistd.h>

int ft_atoi(char *str)
{
	int  num = 0;
	int    i = 0;
	int sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <=  13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
		sign = sign * -1;
	//i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * sign);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int num)
{
	long long int n = num;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n < 10)
		ft_putchar('0' + n);
	else
	{
		ft_putnbr(n / 10);
		ft_putchar('0' + (n % 10));
	}
}

int isprime(int num)
{
	int i = 2;
	if (num <= 0)
		return (0);
	if (num == 2)
		return (1);
	while (i <= num / i)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 2)
		write(1, "0\n", 1);
	if (ac == 2)
	{
		int i = 2;
		int total = 0;
		int n = ft_atoi(av[1]);
		if (n <= 0)
		{
			write(1, "0\n", 2);
			return 0;
		}
		while (i <= n)
		{
			if (isprime(i))
				total += i;
			i++;
		}
		ft_putnbr(total);
	}
	write(1, "\n", 1);
}

#include<unistd.h>

void	ft_print_numbers(void)
{
	int i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}

int  main ()
{
	ft_print_numbers();
}

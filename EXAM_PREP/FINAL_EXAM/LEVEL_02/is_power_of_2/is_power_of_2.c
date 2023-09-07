int	    is_power_of_2(unsigned int n)
{
	if (n > 2)
		return (is_power_of_2(n / 2));
	if (n == 2)
		return (1);
	else
		return (0);

}
#include<stdio.h>

int main ()
{
	printf("%i\n", is_power_of_2(6));
}

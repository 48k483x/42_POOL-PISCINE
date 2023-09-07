#include<unistd.h>

void	print_bits(unsigned char octet)
{
	int oct = octet;
	int divide = 128;
	while (divide)
	{
		if (divide <= oct)
			write(1, "1", 1);
		else 
			write(1, "0", 1);
		oct = oct % divide;
		divide /= 2;
	}
}

int main ()
{
	print_bits(2);
}

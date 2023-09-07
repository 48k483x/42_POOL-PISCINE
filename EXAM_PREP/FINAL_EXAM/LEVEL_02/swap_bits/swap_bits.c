unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}
#include<stdio.h>
int main()
{
	printf ("%d\n", swap_bits(2));
}

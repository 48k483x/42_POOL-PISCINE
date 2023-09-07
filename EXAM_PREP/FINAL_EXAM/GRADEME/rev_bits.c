unsigned char   reverse_bits(unsigned char octet)
{
	unsigned char result;
	int count;

	result = 0;
	count = 8;
	while (count)
	{
		result = result * 2 + (unsigned char)(octet % 2);
		octet = octet / 2;
		count--;
	}
	return (result);
}

#include<stdio.h>
int main ()
{
	printf("%d\n", reverse_bits(2));
}

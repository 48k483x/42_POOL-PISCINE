#include<stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src);
}

int main ()
{
	char x[] = "Abdurrahman";
	char d[20];
	ft_strcpy(d , x);
	printf("%s\n",d);
}

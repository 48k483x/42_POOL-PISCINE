#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include<stdio.h>
int main ()
{
	char dest[12];
	char src[] = "hello";
	ft_strcpy(dest, src);
	printf("Dest : %s\n" , dest);
}

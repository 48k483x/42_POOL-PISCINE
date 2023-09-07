#include<stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	while (src[i])
		i++;
	int *dest;
	dest = malloc(i * sizeof(char));
	if (!dest)
		return NULL;
	i = 0;
	while (src[i])
	{
		dest[i] = src[i};
		i++;
	}
	dest[i] = '\0';
	return dest;
}

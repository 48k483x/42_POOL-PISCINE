#include<stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *copy;

	copy = malloc(length * sizeof(int));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < length)
	{
		copy[i] = f(tab[i]);
		i++;	
	}
	return (copy);
}

#include<stdio.h>
int f(int x)
{
	return (x++);
}


int main()
{
        int  tab[] = {5,4,5,6,9};
        printf("%d\n", ft_map(tab, 5, &f));
}

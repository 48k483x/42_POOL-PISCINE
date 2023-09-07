char    *ft_strrev(char *str)
{
	int	i = 0;
	int j = 0;
	while (str[j])
		j++;
	j--;
	while (i < j)
	{
		char aide = str[i];
		str[i] = str[j];
		str[j] = aide;
		i++;
		j--;
	}
	return (str);
}
#include<stdio.h>
#include<string.h>
int main()
{
	char name[] = "namharrudba";
	printf("%s\n" , ft_strrev(name));
}

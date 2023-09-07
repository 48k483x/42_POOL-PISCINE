#include<stdlib.h>

size_t  ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				count++;
				break;				
			j++;
		}
		i++;
	}
	return (count);
}
#include<stdio.h>
#include<string.h>

int main()
{
	char s[] = "agugdbgywcerve";
	char accept[] = "abc123";
	size_t rere = ft_strspn(s, accept);
	printf("Mine : %zu\n", rere);
	size_t xexe = strspn(s,accept );
	printf("The Real One From The Library Directly : %zu\n",xexe  )  ;
}

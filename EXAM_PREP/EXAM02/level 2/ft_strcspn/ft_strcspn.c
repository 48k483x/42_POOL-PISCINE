#include <stdio.h> // Include for printf
#include <stddef.h> // Include for size_t
#include<string.h> // Include for strcspn

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;
	size_t count = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (count);	
			j++;
		}
		i++;
		count++;
	}
	return (count);
}

int main(void)
{
	const char s[] = "99999991";
    const char reject[]= "21";

    size_t result = ft_strcspn(s, reject);
	size_t result1 = strcspn(s, reject);

    printf("Length of initial segment not containing any characters from str2: %zu\n", result);
	printf("The Test Of The Rea Strcspn Give ::   %zu\n",result1);
}

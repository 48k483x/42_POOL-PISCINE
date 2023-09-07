/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:26:26 by achahrou          #+#    #+#             */
/*   Updated: 2023/09/01 10:37:17 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return (char *)&s1[i];
			j++;
		}
		i++;
	}
	return (0);
}

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int main ()
{
	char x[] = "Abdurrahman";
	char y[] = "Chhhhhhhacc";
	//strpbrk(x, y);
	printf("%s\n", strpbrk(x, y));
	printf("%s\n", ft_strpbrk(x,y));
}

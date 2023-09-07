/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:43:08 by achahrou          #+#    #+#             */
/*   Updated: 2023/09/03 12:09:25 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>


int strcp(char *s1, char *s2)
{
    int i = 0;
    //int count = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i]; // Return the comparison result immediately
        i++;
    }

    // If the loop completes, one string might be shorter than the other
    // In this case, return the difference in string lengths
    return s1[i] - s2[i];
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}

void	ft_swapox(char **s1, char **s2)
{
	char	*rndm;

	rndm = *s1;
	*s1 = *s2;
	*s2 = rndm;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (strcp(argv[j], argv[j + 1]) > 0)
			{
				ft_swapox(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
}

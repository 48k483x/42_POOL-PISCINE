/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:26:47 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/24 16:32:00 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int	i = 0;
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
					str[i] += 1; 
			else if (str[i] == 'z' || str[i] == 'Z')
					str[i] -= 25;

		write(1, &str[i], 1);
		i++;
		}
	}
	write(1, "\n", 1);
}

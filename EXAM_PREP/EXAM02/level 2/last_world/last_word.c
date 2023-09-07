/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:08:20 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/30 22:30:32 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0;
		while (str[i])
			i++;
		i--;
		while (str[i] == 32 || str[i] == '\t')
			i--;
		while (i > 0)
		{	
			if (str[i] == 32 || str[i] == '\t')
				break;
			i--;
		}
		i++;
		while (str[i] != 32 && str[i] != '\t'&& str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:16:16 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/22 02:53:51 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_ptchr(char x)
{
	write(1, &x, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i ;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_ptchr('\\');
			ft_ptchr("0123456789abcdef"[s[i] / 16]);
			ft_ptchr("0123456789abcdef"[s[i] % 16]);
		}
		else
		{
			ft_ptchr(str[i]);
		}
		i++;
	}
}

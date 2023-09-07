/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:06:56 by achahrou          #+#    #+#             */
/*   Updated: 2023/09/03 20:16:37 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_put_chaine(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
}

void	ft_putchar(char str)
{
	write (1, &str, 1);
}

void	ft_putnbr(int nb)
{
	long long int	a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
	}
	if (a <= 9)
	{
		ft_putchar('0' + a);
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putchar('0' + a % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	a;

	a = 0;
	while (par[a].str != '\0')
	{
		ft_put_chaine(par[a].str);
		write (1, "\n", 1);
		ft_putnbr(par[a].size);
		write (1, "\n", 1);
		ft_put_chaine(par[a].copy);
		write (1, "\n", 1);
		a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:00:10 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/27 15:51:40 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	putchr(chr x)
{
	write(1, &x, 1);
}

int	slen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_valid(char *basox)
{
	int	i;
	int	j;

	lenbase = slen(basox);
	i = 0;
	if (basox[0] == 0 && basox[1] == 0)
		return (0);
	while (basox[i])
	{
		if (basox[i] <= 32 || basox[i] == 127 || basox[i] == 43 || basox == 45)
			return (0);
		j = i + 1;
		while (basox[j])
		{
			if (basox[i] == basox[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			base_len;
	int			indice;

	base_len = slen(base);
	indice = is_valid(base);
	nb = nbr;
	if (indice == 1)
	{
		if (nb < 0)
		{
			putchr("-");
			nb = -nb;
		}
		if (nb < base_len)
		{
			putchr(base[nb]);
		}
		if (nb >= base_len)
		{
			ft_putnbr_base(nb / base_len, base);
			ft_putnbr_base(nb % base_len, base);
		}
	}
}

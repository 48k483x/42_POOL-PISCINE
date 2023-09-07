   /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:50:10 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/17 18:50:21 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	rndm;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			rndm = tab[j];
			tab[j] = tab[i];
			tab[i] = rndm;
			j++;
		}
		i++;
	}
}

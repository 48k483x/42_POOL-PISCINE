/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:42:58 by achahrou          #+#    #+#             */
/*   Updated: 2023/09/03 20:14:43 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_length(char *chaine)
{
	int	a;

	a = 0;
	while (chaine[a] != '\0')
		a++;
	return (a);
}

char	*ft_strduplicate(char *src)
{
	char	*copy;
	int		a;
	int		i;

	a = ft_length(src);
	copy = malloc((a + 1) * sizeof(char));
	if (!copy)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			a;
	t_stock_str	*tab;

	tab = malloc ((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		tab[a].size = ft_length(av[a]);
		tab[a].str = av[a];
		tab[a].copy = ft_strduplicate(av[a]);
		a++;
	}
	tab[a].str = 0;
	tab[a].copy = 0;
	return (tab);
}

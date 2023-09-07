/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:37:01 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/26 21:31:32 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int			index;
	long int	nbs;

	nbs = nb;
	if (nbs < 0)
		return (0);
	if (nbs == 0)
		return (0);
	if (nbs == 1)
		return (1);
	else
	{
		index = 2;
		while (index * index <= nbs && index <= 46360)
		{
			if (index * index == nbs)
				return (index);
			index++;
		}
	}
	return (0);
}

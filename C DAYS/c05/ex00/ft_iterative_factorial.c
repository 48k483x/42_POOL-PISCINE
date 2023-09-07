/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:19:10 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/27 12:56:01 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	long long	nbs;
	int			i;
	int			number;

	i = 1;
	number = 1;
	nbs = nb;
	if (nbs < 0)
		return (0);
	while (i <= nbs)
	{
		number *= i;
		i++;
	}
	return (number);
}

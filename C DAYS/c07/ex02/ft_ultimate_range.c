/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:55:48 by achahrou          #+#    #+#             */
/*   Updated: 2023/09/06 13:03:47 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*int_arr;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	int_arr = malloc(size * sizeof(int));
	if (!int_arr)
		return (0);
	while (min < max)
	{
		int_arr[i] = min;
		min++;
		i++;
	}
	*range = int_arr;
	return (size);
}

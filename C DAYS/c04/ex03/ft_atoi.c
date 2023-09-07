/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:48:58 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/26 23:13:11 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	minus;
	int	numbers;

	minus = 0;
	numbers = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		numbers *= 10;
		numbers += *str - 48;
		++str;
	}
	if (!(minus % 2))
		return (numbers);
	return (-numbers);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:40:03 by achahrou          #+#    #+#             */
/*   Updated: 2023/09/02 16:12:54 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	isprime(int n)
{
	int	i;

	i = 2;
	if (n <= 1)
		return (0);
	if (n == 2)
		return (2);
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (isprime(nb) == 1)
			return (nb);
		nb++;
	}
}
int main()
{
	printf("%d\n",ft_find_next_prime(9));

}

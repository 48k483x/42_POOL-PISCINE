/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:36:13 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/30 21:51:16 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n > 2)
		return (is_power_of_2(n / 2));
	if (n == 2)
		return (1);
	return (0);
}

int main ()
{
		unsigned int num = 3;
		printf("%i\n",is_power_of_2(num));
}

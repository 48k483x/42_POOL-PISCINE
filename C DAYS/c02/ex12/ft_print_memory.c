/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:42:52 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/21 13:56:20 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	stock_adr(char *str)
{
	int	adr[16];

	adr[16] = &str[0];
}

void adress_first(char *addr)
{
	int	i;

	i = 0;
	while (addr[i] != '\0')
	{
		write(1 , &addr , 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
		
}

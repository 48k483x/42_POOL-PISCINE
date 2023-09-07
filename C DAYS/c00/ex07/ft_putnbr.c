/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:46:29 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/31 14:28:42 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    long long int    nbs;

    nbs = nb;
    if (nbs < 0)
    {
        ft_putchar('-');
        nbs = -nbs;
    }
    if (nbs <= 9)
    {
        ft_putchar('0' + nbs);
    }
    else
    {
        ft_putnbr(nbs / 10);
        ft_putchar('0' + nbs % 10);
    }
}

int main()
{
	ft_putnbr(-2023);
	printf("\n2023\n");
}

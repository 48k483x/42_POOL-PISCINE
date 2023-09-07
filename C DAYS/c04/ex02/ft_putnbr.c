/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:03:41 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/26 22:06:45 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

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

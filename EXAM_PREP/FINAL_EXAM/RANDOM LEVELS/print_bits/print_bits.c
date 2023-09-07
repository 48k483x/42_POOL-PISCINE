/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:31:39 by achahrou          #+#    #+#             */
/*   Updated: 2023/09/02 21:35:56 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_bits(unsigned char octet)
{
	int	dividox;
	int	octox;

	dividox = 128;
	octox = octet;
	while (dividox)
	{
		if (dividox <= octox)
		{
			write(1, "1", 1);
			octox %= dividox;
		}
		else
			write(1, "0", 1);
		dividox /= 2;
	}
}

int main ()
{
	print_bits(2);
}

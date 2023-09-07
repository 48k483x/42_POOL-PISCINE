/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:29:47 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/31 10:25:43 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int				largest;
	unsigned int	i;

	i = 1;
	if (len > 0)
		largest = tab[0];
	else
		return (0);
	while (i < (len))
	{
		if (largest < tab[i])
				largest = tab[i];
		i++;
	}
	return (largest);
}
/*#include<stdio.h>
int main()
{
	int tab[] = {15, 12, 65, 20, 17, 180, 1589,23,45, 48, 2000 , 45, 1 , 2};
	int len = 14;
	printf("%i\n", max(tab, len));

}*/

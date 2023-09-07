/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:34:32 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/25 10:33:43 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int double_check(char *s, char x, int pos)
{
	int i = 0;
	while(i < pos)
		if(s[i] == x)
			return 0;
		i++;
	return 1;
}

void inter(char *s1,char *s2)
{
	int i = 0;
	int j;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
			{
				if(double_check(s1 , s1[i] , i) == 1)
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
		inter(argv[1] , argv[2]);
	write(1, "\n", 1);
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:55:03 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/25 11:17:09 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int check_doubles1(char *str , char x, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if(str[i] == x)
			return 0;
		i++;
	}
	return 1;
}
int check_doubles2(char *str,char x)
{
	int i = 0;
	while(str[i] != 0)
	{
		if(str[i] == x)
			return 0;
		i++;
	}
	return 1;
}

void unionn(char *s1 ,char *s2)
{
	int i = 0;
	while (s1[i])
	{
		if(check_doubles1(s1 , s1[i] , i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;

	while(s2[i])
	{
		if(check_doubles2(s1 , s2[i]))
		{
			if(check_doubles1(s2, s2[i] , i))
				write(1, &s2[i] , 1);
		}
	i++;	
	}
}

int main (int argc , char **argv)
{
	if(argc == 3)
		unionn(argv[1] , argv[2]);
	write(1, "\n" , 1);
}

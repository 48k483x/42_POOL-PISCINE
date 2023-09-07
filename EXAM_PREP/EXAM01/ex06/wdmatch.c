/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 06:08:22 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/30 11:07:46 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1 , &str[i] , 1);
		i++;
	}
}

int slen(char *s)
{
	int i = 0;
	while(s[i] != 0)
		i++;
	return (i);
}

int main(int argc , char **argv)
{	
	if(argc == 3)
	{
		int i = 0;
		int wdmatches = 0;
		char *s1 = argv[1];
		char *s2 = argv[2] ;
		int j = 0;
		while(s1[i])
		{
			while(s2[j])
			{
				if(s1[i] == s2[j])
				{
					wdmatches++;
					break;
				}
				j++;
			}
			i++;
		}
		if(wdmatches == slen(s1)){
			putstr(s1);
		}	
	}
		write(1, "\n",1);
}

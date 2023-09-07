/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:44:36 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/24 11:45:34 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int strlent(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;    
    }
    return (i);  
}

char *ft_strrev(char  *str)
{
  int i = 0;
  int j = strlent(str) -1; 
  while (i < j)
  {
    char rndm;
    rndm = str[i];
    str[i] = str[j];
    str[j] = rndm;
    i++;
    j--;
  }
  return (str);
}

int main()
{
    char myString[] = "Hello, World!";
    
    printf("Original string: %s\n", myString);
    
    ft_strrev(myString);
    
    printf("Reversed string: %s\n", myString);
    
    return 0;
}

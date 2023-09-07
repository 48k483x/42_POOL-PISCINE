/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:51:30 by achahrou          #+#    #+#             */
/*   Updated: 2023/09/06 13:02:42 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(int size, char **str, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (*str[i])
	{
		len++;
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	concat_one(char *x, int size, char **strs, char *sep)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_strcat(x, strs[i]);
		if (i < size - 1)
			ft_strcat(x, sep);
		i++;
	}
	return (*x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		t_len;
	char	*resultox_stringox;

	i = 0;
	j = 0;
	t_len = total_len(size, strs, sep);
	if (size == 0)
	{
		resultox_stringox = malloc(sizeof(char));
		if (!resultox_stringox)
			return (0);
		resultox_stringox[0] = '\0';
		return (resultox_stringox);
	}
	else
	{
		resultox_stringox = malloc(t_len * sizeof(char));
		if (!resultox_stringox)
			return (0);
		resultox_stringox[0] = '\0';
	}
	concat_one(resultox_stringox, size, strs, sep);
	return (resultox_stringox);
}
/*
#include<stdio.h>

int main() {
    char *strs[] = {"Hello", "its", "me", "Abdurrahman", "Chahrour", ":)"};
    char *sep = ", ";
    int size = 6; // Number of strings in strs

    char *result = ft_strjoin(size, strs, sep);

    if (result) {
        printf("Concatenated String: %s\n", result);

   
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/

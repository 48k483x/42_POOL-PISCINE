/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:44:01 by achahrou          #+#    #+#             */
/*   Updated: 2023/09/05 11:31:01 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	a;

	a = 0;
	while (charset[a] != '\0')
	{
		if (charset[a] == c)
			return (1);
		a++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	a;
	int	cmpt;

	a = 0;
	cmpt = 0;
	while (str[a] != '\0')
	{
		while (str[a] && check_sep(str[a], charset))
			a++;
		if (str[a] != '\0')
			cmpt++;
		while (str[a] && !check_sep(str[a], charset))
			a++;
	}
	return (cmpt);
}

int	ft_len_word(char *str, char *charset)
{
	int	a;

	a = 0;
	while (str[a] != '\0' && !check_sep(str[a], charset))
		a++;
	return (a);
}

char	*ft_stock_words(char *str, char *charset)
{
	int		length;
	char	*ch;
	int		a;

	length = ft_len_word(str, charset);
	ch = (char *)malloc(sizeof(char) * (length + 1));
	a = 0;
	while (a < length)
	{
		ch[a] = str[a];
		a++;
	}
	ch[a] = '\0';
	return (ch);
}

char	**ft_split(char *str, char *charset)
{
	char	**ch;
	int		a;
	int		len;
	int		i;

	len = count_words(str, charset);
	ch = (char **)malloc(sizeof(char *) * (len + 1));
	if (!ch)
		return (0);
	a = 0;
	i = 0;
	while (str[a] != '\0')
	{
		while (str[a] && check_sep(str[a], charset))
			a++;
		if (str[a] != '\0')
		{
			ch[i] = ft_stock_words(str + a, charset);
			i++;
		}
		while (str[a] && !check_sep(str[a], charset))
			a++;
	}
	ch[i] = 0;
	return (ch);
}

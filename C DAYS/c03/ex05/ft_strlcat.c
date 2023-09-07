/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:51:40 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/23 20:20:13 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	length(char *x)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;		
	unsigned int	j;
	unsigned int	lent_src;
	unsigned int	lent_dest;

	i = 0;
	j = 0;
	lent_dest = length(dest);
	lent_src = length(src);
	n = size - 1;
	if (size <= lent_dest || size == 0)
		return (lent_src + size);
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lent_dest + lent_src);
}

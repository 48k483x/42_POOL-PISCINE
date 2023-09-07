/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:30:18 by achahrou          #+#    #+#             */
/*   Updated: 2023/08/30 08:43:34 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr_of_ints;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	arr_of_ints = malloc(size * sizeof(int));
	if (!arr_of_ints)
		return (0);
	while (min < max)
	{
		arr_of_ints[i] = min;
		min++;
		i++;
	}
	return (arr_of_ints);
}
/*#include<stdio.h>

int main() {
    int min = 1;
    int max = 100;

    int *result = ft_range(min, max);

    if (result == 0) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Generated array: ");
    for (int i = 0; i < (max - min); i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); // Don't forget to free the allocated memory.

    return 0;
}*/

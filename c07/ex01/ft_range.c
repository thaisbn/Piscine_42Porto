/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:57:01 by thaberna          #+#    #+#             */
/*   Updated: 2025/08/06 13:15:49 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = -2;
	max = 4;
	array = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
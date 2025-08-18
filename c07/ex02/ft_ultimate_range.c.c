/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:12:40 by thaberna          #+#    #+#             */
/*   Updated: 2025/08/18 19:08:23 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tmp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (-1);
	i = 0;
	while (i < size)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	size;
	int	i = 0;

	size = ft_ultimate_range(&arr, 1, 5);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
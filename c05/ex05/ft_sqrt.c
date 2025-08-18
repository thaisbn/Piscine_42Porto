/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:55:37 by thaberna          #+#    #+#             */
/*   Updated: 2025/08/04 16:07:03 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 0;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(9));  // 3
	printf("%d\n", ft_sqrt(25)); // 5
	printf("%d\n", ft_sqrt(10)); // 0
	printf("%d\n", ft_sqrt(0));  // 0
	printf("%d\n", ft_sqrt(-5)); // 0
	return (0);
}
*/
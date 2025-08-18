/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 08:59:07 by thaberna          #+#    #+#             */
/*   Updated: 2025/08/03 14:09:17 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(3));  // ex: f(3) = 3 * 2 * 1 = 6
	printf("%d\n", ft_iterative_factorial(0));  // 1
	printf("%d\n", ft_iterative_factorial(-2)); // 0
	return (0);
}
*/
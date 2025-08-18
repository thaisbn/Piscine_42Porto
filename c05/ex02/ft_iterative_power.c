/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:12:33 by thaberna          #+#    #+#             */
/*   Updated: 2025/08/03 15:01:09 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)

{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("2^3 = %d\n", ft_iterative_power(2, 3));   //  2^3 = 2 × 2 × 2 = 8
	printf("5^0 = %d\n", ft_iterative_power(5, 0));   //  1
	printf("0^0 = %d\n", ft_iterative_power(0, 0));   //  1
	printf("3^-2 = %d\n", ft_iterative_power(3, -2)); //  0
	return (0);
}
*/
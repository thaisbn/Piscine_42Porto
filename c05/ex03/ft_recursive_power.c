/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 11:02:59 by thaberna          #+#    #+#             */
/*   Updated: 2025/08/03 15:00:38 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("2^3 = %d\n", ft_recursive_power(2, 3));     // 2^3 = 2 × 2 × 2 = 8
	printf("5^0 = %d\n", ft_recursive_power(5, 0));     // 1
	printf("0^0 = %d\n", ft_recursive_power(0, 0));     // 1
	printf("3^-2 = %d\n", ft_recursive_power(3, -2));   // 0
	return (0);
}
*/
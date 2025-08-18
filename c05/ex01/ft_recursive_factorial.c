/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 08:28:43 by thaberna          #+#    #+#             */
/*   Updated: 2025/08/03 14:18:22 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(3));  // 6 ex: f(3) = 3 * 2 * 1 = 6
	printf("%d\n", ft_recursive_factorial(0));  //  1
	printf("%d\n", ft_recursive_factorial(-1)); // 0
	return (0);
}
*/
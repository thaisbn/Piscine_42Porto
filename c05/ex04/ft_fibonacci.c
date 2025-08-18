/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 11:17:37 by thaberna          #+#    #+#             */
/*   Updated: 2025/08/03 15:32:25 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	printf("F(0) = %d\n", ft_fibonacci(0));   // 0
	printf("F(1) = %d\n", ft_fibonacci(1));   // 1
	printf("F(2) = %d\n", ft_fibonacci(2));   // 1
	printf("F(3) = %d\n", ft_fibonacci(3));   // 2
	printf("F(6) = %d\n", ft_fibonacci(6));   // 8
	printf("F(-1) = %d\n", ft_fibonacci(-1)); // -1
	return (0);
}
*/
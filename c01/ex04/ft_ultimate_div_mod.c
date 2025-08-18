/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:33:45 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/23 18:31:07 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 10;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("Division: %d\n", a);
	printf("Remainder: %d\n", b);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:40:53 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/21 17:17:00 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 10;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d\n", div);
	printf("Remainder: %d\n", mod);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 22:20:08 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/23 22:20:34 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("Test1: %d\n", ft_str_is_numeric("0123456789")); // Deve retornar 1
	printf("Test2: %d\n", ft_str_is_numeric("123abc"));      // Deve retornar 0
	printf("Test3: %d\n", ft_str_is_numeric(""));            // Deve retornar 1
	return (0);
}


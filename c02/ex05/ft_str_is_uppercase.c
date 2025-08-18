/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 22:55:59 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/23 23:10:06 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("Test1: %d\n", ft_str_is_uppercase("ABCXYZ"));
	printf("Test2: %d\n", ft_str_is_uppercase("ABC123"));
	printf("Test3: %d\n", ft_str_is_uppercase(""));
	return (0);
}
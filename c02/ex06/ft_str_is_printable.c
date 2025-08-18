/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 22:59:22 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/23 23:10:11 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("Test1: %d\n", ft_str_is_printable("Hello World!"));
	printf("Test2: %d\n", ft_str_is_printable("abc\n123"));
	printf("Test3: %d\n", ft_str_is_printable(""));
	return (0);
}
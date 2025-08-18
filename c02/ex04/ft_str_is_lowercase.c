/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 22:41:39 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/23 22:43:24 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("Test1: %d\n", ft_str_is_lowercase("abcxyz"));
	printf("Test2: %d\n", ft_str_is_lowercase("abcXYZ"));
	printf("Test3: %d\n", ft_str_is_lowercase(""));
	return (0);
}

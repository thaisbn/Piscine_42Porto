/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 07:54:32 by thaberna          #+#    #+#             */
/*   Updated: 2025/08/07 10:19:49 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)

{
	printf("Test1: %d\n", ft_strcmp("ab", "ab"));// Test1: 0
	printf("Test2: %d\n", ft_strcmp("z", "a"));// Test2:25
	printf("Test3: %d\n", ft_strcmp("a", "b"));//Test3:-1
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:09:34 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/27 15:24:14 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	printf("Result: %d\n", ft_strncmp("abcdef", "abcxyz", 3)); // Result: 0
	printf("Result: %d\n", ft_strncmp("zxy", "abc", 3)); // Result: 25
	printf("Result: %d\n", ft_strncmp("abcdef", "abcxyz", 4)); // Result -20
	return (0);
}
*/

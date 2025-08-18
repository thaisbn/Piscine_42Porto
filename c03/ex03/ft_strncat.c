/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:38:14 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/27 16:55:20 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	while (dest[i])
		i++;
	s = 0;
	while (src[s] && s < nb)
	{
		dest[i + s] = src[s];
		s++;
	}
	if (s < nb)
	{
		dest[i + s] = '\0';
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hello, ";
	char	src[] = "people!";

	printf("%s\n", ft_strncat(dest, src, 3)); // "Hello, peo"
	return (0);
}
*/
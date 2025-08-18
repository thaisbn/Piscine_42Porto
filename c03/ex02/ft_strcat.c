/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 09:26:35 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/27 15:53:59 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	while (dest[i])
		i++;
	s = 0;
	while (src[s])
	{
		dest[i + s] = src[s];
		s++;
	}
	dest[i + s] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hello, ";
	char	src[] = "people!";
	
	printf("%s\n", ft_strcat(dest, src));//"Hello, people!"
	return (0);
}
*/
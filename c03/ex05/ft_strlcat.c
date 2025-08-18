/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:48:49 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/28 09:03:08 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i = 0;

	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	if (size <= dest_len)
		return (size + src_len);

	i = 0;
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest_len + src_len);
}

#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hello, ";
	char	src[] = "world!";

	// Buffer total: 20, dest inicial = 7 bytes ("Hello, "), src = 6 bytes
	// Esperado: "Hello, world!" e retorno = 13
	unsigned int result = ft_strlcat(dest, src, 20);

	printf("%s\n", dest);
	printf("%u\n", result);
	return (0);
}


#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

int	calc_total_length(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*current;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	result = (char *)malloc(sizeof(char)
			* (calc_total_length(size, strs, sep) + 1));
	if (!result)
		return (NULL);
	current = result;
	i = 0;
	while (i < size)
	{
		current = ft_strcpy(current, strs[i]);
		if (i < size - 1)
			current = ft_strcpy(current, sep);
		i++;
	}
	*current = '\0';
	return (result);
}

/*
int	main(void)
{
	char *words[] = {"hello", "people", "over"};
	char *sep = " ";
	char *joined;

	joined = ft_strjoin(3, words, sep);
	if (joined)
	{
		printf("Resultado: %s\n", joined);
		free(joined);
	}
	return (0);
}
*/

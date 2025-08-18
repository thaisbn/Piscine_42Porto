/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaberna <thaberna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:05:49 by thaberna          #+#    #+#             */
/*   Updated: 2025/07/27 14:21:23 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	parse_clues(char *str, int *clues)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '4')
		{
			if (i >= 16)
				return (0);
			clues[i++] = *str - '0';
		}
		else if (*str != ' ')
			return (0);
		str++;
	}
	return (i == 16);
}

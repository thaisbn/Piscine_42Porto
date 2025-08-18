/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:24:12 by ando-sou          #+#    #+#             */
/*   Updated: 2025/07/27 12:34:58 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	**create_grid(void)
{
	int	**tab;
	int	y;
	int	x;

	tab = malloc(4 * 8);
	y = 0;
	while (y < 4)
	{
		tab[y] = malloc(4 * 4);
		x = 0;
		while (x < 4)
			tab[y][x++] = 0;
		y++;
	}
	return (tab);
}

void	show_grid(int **tab)
{
	int		y;
	int		x;
	char	c;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			c = tab[y][x] + '0';
			write(1, &c, 1);
			if (x != 3)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

void	change_row(int **tab, int row_nbr, char *row_chars)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (row_chars[i] != '0')
			tab[row_nbr][i] = row_chars[i] - '0';
		i++;
	}
}

void	change_col(int **tab, int col_nbr, char *col_chars)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col_chars[i] != '0')
			tab[i][col_nbr] = col_chars[i] - '0';
		i++;
	}
}

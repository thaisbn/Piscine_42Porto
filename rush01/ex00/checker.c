/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:02:57 by ando-sou          #+#    #+#             */
/*   Updated: 2025/07/27 12:35:38 by ando-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	visible(int	*line, int clue);

int	check_row(int **grid, int row, int x)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == x)
			return (0);
		i++;
	}
	return (1);
}

int	check_col(int **grid, int col, int x)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][col] == x)
			return (0);
		i++;
	}
	return (1);
}

// Top tob bot
// Bot to top
// adding i to remove declaration and assigment
int	ck_col_vws(int **grid, int *clues, int i)
{
	int	line[4];
	int	j;

	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			line[j] = grid[j][i];
			j++;
		}
		if (!visible(line, clues[i]))
			return (0);
		j = 0;
		while (j < 4)
		{
			line[j] = grid[3 - j][i];
			j++;
		}
		if (!visible(line, clues[4 + i]))
			return (0);
		i++;
	}
	return (1);
}

// first loop lef to right
// seconde loop right to left
// adding i to remove declaration and assigment
int	ck_row_vws(int **grid, int *clues, int i)
{
	int	l[4];
	int	j;

	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			l[j] = grid[i][j];
			j++;
		}
		if (!visible(l, clues[8 + i]))
			return (0);
		j = 0;
		while (j < 4)
		{
			l[j] = grid[i][3 - j];
			j++;
		}
		if (!visible(l, clues[12 + i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_views(int **grid, int *clues)
{
	if (!ck_col_vws(grid, clues, 0))
		return (0);
	if (!ck_row_vws(grid, clues, 0))
		return (0);
	return (1);
}

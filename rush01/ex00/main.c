/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ando-sou <ando-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:11:02 by ando-sou          #+#    #+#             */
/*   Updated: 2025/07/27 14:19:13 by thaberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_views(int **grid, int *clues);
int		check_row(int **grid, int row, int x);
int		check_col(int **grid, int col, int x);
int		parse_clues(char *str, int *clues);
int		**create_grid(void);
void	show_grid(int **tab);
void	ft_putstr(char *str);
void	ft_putchar(char x);

int	solve(int **grid, int *clues, int pos)
{
	int	row;
	int	col;
	int	val;

	if (pos == 16)
		return (check_views(grid, clues));
	row = pos / 4;
	col = pos % 4;
	val = 1;
	while (val <= 4)
	{
		if (check_row(grid, row, val) && check_col(grid, col, val))
		{
			grid[row][col] = val;
			if (solve(grid, clues, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	**grid;
	int	clues[16];
	int	i;

	if (argc != 2 || !parse_clues(argv[1], clues))
	{
		ft_putstr("Error\n");
		return (1);
	}
	grid = create_grid();
	if (solve(grid, clues, 0))
		show_grid(grid);
	else
		ft_putstr("Error\n");
	i = 0;
	while (i < 4)
		free(grid[i++]);
	free(grid);
	return (0);
}

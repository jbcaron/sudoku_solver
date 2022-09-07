#include "check.h"
#include "print_grid.h"

int	backtracking(char grid[][9], char start_grid[][9], int index)
{
	char	value;

	if (index == 81)
	{
		print_grid(grid);
		return (1);
	}
	if (start_grid[index / 9][index % 9])
	{
		backtracking(grid, start_grid, index + 1);
		return (0);
	}
	value = 1;
	while (value <= 9)
	{
		if (check(grid, index, value))
		{
			grid[index / 9][index % 9] = value;
			backtracking(grid, start_grid, index + 1);
			grid[index / 9][index % 9] = 0;
		}
		value ++;
	}
	return (0);
}

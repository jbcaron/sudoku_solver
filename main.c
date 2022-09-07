#include <unistd.h>
#include "get_grid.h"
#include "file_to_grid.h"
#include "cpy_grid.h"
#include "backtracking.h"

void	cpy_grid(char dest[][9], char src[][9]);

int	main(int argc, char **argv)
{
	char	grid[9][9];
	char	start_grid[9][9];

	if (argc == 1)
	{
		if (get_grid(start_grid, 0) < 0)
			return (0);
	}
	else if (argc == 2)
	{
		if (file_to_grid(start_grid, argv[1]) < 0)
			return (0);
	}
	else
	{
		write (1, "Error : Too many arguments\n", 27);
		return (0);
	}	
	cpy_grid(grid, start_grid);
	backtracking(grid, start_grid, 0);
	return (0);
}

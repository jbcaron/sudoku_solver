#include <fcntl.h>
#include <unistd.h>
#include "get_grid.h"

int	len_str(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

int	file_to_grid(char grid[][9], char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Error : open file '", 19);
		write(1, file, len_str(file));
		write(1, "' failed\n", 9);
		return (-1);
	}
	if (get_grid(grid, fd) < 0)
		return (-1);
	close(fd);
	return (0);
}

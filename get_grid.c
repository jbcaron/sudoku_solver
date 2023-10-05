#include <unistd.h>

int	get_line(char *buf, int fd)
{
	int		i;
	char	c;

	if (read(fd, buf, 9) != 9)
		return (-1);
	read(fd, &c, 1);
	if (c != '\n')
		return (-1);
	i = 0;
	while (i < 9)
	{
		if (buf[i] < '0' || buf[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

void	line_to_tab(char grid[][9], int n_line, char *buf)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		grid[n_line][i] = buf[i] - '0';
		i++;
	}
}

int	get_grid(char grid[][9], int fd)
{
	char	buf[9];
	int		n_line;

	n_line = 0;
	while (n_line < 9)
	{
		write(1, "> ", 2);
		if (get_line(buf, fd) == -1)
		{
			write (1, "Error : wrong input format\n", 27);
			return (-1);
		}
		line_to_tab(grid, n_line, buf);
		n_line++;
	}
	return (1);
}

#include <unistd.h>

void	print_grid(const char grid[][9])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 9)
	{
		j = 0;
		if (i % 3 == 0)
			write(1, " -----------------------\n", 25);
		while (j < 9)
		{
			c = grid[i][j] + '0';
			if (j % 3 == 0)
				write(1, "| ", 2);
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "|\n", 2);
		i++;
	}
	write(1, " -----------------------\n\n", 26);
}

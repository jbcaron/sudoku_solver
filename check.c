int	check_lr(char grid[][9], int index, char value)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (grid[index / 9][i] == value)
			return (0);
		if (grid[i][index % 9] == value)
			return (0);
		i++;
	}
	return (1);
}

int	check_sqr(char grid[][9], int index, char value)
{
	int	i;
	int	j;
	int	x;
	int	y;

	x = index % 9 / 3 * 3;
	y = index / 27 * 3;
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (grid[y + i][x + j] == value)
				return (0);
		j++;
		}
		i++;
	}
	return (1);
}

int	check(char grid[][9], int index, char value)
{
	if (!check_lr(grid, index, value))
		return (0);
	if (!check_sqr(grid, index, value))
		return (0);
	return (1);
}

void	cpy_grid(char dest[][9], char src[][9])
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			dest[i][j] = src[i][j];
			j++;
		}
		i++;
	}
}

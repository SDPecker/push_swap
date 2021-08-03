void	exec_rx(int *s1, int size)
{
	int	i;
	int	buf;

	i = 1;
	buf = s1[0];
	if (size >= 2)
	{
		while (i < size - 1)
		{
			s1[i - 1] = s1[i];
			i++;
		}
		s1[i] = buf;
	}
}

void	exec_rrx(int *s1, int size)
{
	int	i;
	int	buf;

	i = size - 2;
	buf = s1[size - 1];
	if (size >= 2)
	{
		while (i > -1)
		{
			s1[i] = s1[i];
			i++;
		}
		s1[i] = buf;
	}
}
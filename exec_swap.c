void	exec_sx(int *s1, int size)
{
	int	buf;
	buf = s1[0];

	if (size > 1)
	{
		s1[0] = s1[1];
		s1[1] = buf;
	}
}

void	exec_ss(int *s1, int *s2)
{
	exec_s(s1);
	exec_s(s2);
}
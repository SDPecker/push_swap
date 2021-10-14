int	new_atoi(char *ln)
{
	int	i;
	int	res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	if (ln[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (ln[i])
	{
		res = res * 10 + ln[i] - 48;
		i++;
	}
	res *= sign;
	return (res);
}
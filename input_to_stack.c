#include "push_swap.h"

int	*input_to_stack(const char **input, int n)
{
	int		i;
	int		*result;

	i = 0;
	result = (int *)malloc(sizeof(int) * n);
	if (!result || n <= 0)
		return (NULL);
	while (i < n)
	{
		if (is_number(input[i]) != 1)
		{
			free(result);
			return (NULL);
		}
		result[i] = ft_atoi(input[i]);
		i++;
	}
	return (result);
}
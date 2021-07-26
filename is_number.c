#include "push_swap.h"

int	is_number(const char *ln)
{
	int	i;

	i = 1;
	if (!ft_isdigit(ln[0]) && ln[0] != '-')
		return (0);
	while (ln[i])
	{
		if (!ft_isdigit(ln[i++]))
			return (0);
	}
	return (1);
}
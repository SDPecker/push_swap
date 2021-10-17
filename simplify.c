#include "push_swap.h"
void	simplify(stack *st)
{
	int		*res;
	int		i;
	int		j;
	int		val;

	res = (int *)malloc(sizeof(int) * st->size);
	i = 0;
	val = 0;
	while (i < st->size)
	{
		while (j < st->size)
		{
			if (st->array[j] > st->array[i])
				val++;
			j++;
		}
		res[i] = val;
		i++;
		val = 0;
	}
	free(st->array);
	st->array = res;
}
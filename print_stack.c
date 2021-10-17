#include <stdio.h>
#include "push_swap.h"

void	print_stack(stack st)
{
	int	i;

	i = 0;
	while (i < st.size)
		printf("%i ", st.array[i++]);
	write(1, "\n", 1);
	printf("%i\n", st.size);
}
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*stack_a;
	int		*stack_b;
	int		i;
	
	stack_a = input_to_stack(argv, argc);
	stack_b = (int *)malloc(sizeof(int) * argc);
	if (!stack_a || !stack_b)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	free(stack_a);
	free(stack_b);
	return (1);
}
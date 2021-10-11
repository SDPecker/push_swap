/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:38 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/11 17:03:36 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	stack	stack_a;
	stack	stack_b;
	
	stack_a = input_to_stack(argv, argc);
	stack_b.array = (int *)malloc(sizeof(int) * argc);
	stack_b.size = 0;
	if (!stack_a.array)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 3)
		sort_3(stack_a);
	free(stack_a.array);
	free(stack_b.array);
	return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:07 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/17 14:29:54 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack	input_to_stack(char **input, int n)
{
	int		i;
	stack	result;

	i = 0;
	result.size = n;
	result.array = (int *)malloc(sizeof(int) * n);
	if (n <= 0)
	{
		free_stack(&result);
		return (result);
	}
	while (i < n)
	{
		if (!is_number(input[i]))
		{
			free_stack(&result);
			return (result);
		}
		result.array[i] = new_atoi(input[i + 1]);
		i++;
	}
	if (has_doubles(result))
		free_stack(&result);
	return (result);
}

void	free_stack(stack *st)
{
	st->size = 0;
	free(st->array);
	st->array = 0;
}

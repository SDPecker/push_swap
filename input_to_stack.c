/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:07 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/11 17:50:29 by amohiam          ###   ########.fr       */
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
	if (!result.array || n <= 0)
	{
		free_stack(result);
		return (result);
	}
	while (i < n)
	{
		if (!is_number(input[i]))
		{
			free_stack(result);
			return (result);
		}
		result.array[i] = ft_atoi(input[i]);
		i++;
	}
	if (has_doubles(result))
		free_stack(result);
	return (result);
}

void	free_stack(stack st)
{
	free(st.array);
	st.array = 0;
	st.size = 0;
}

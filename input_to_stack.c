/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:07 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/06 15:27:46 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
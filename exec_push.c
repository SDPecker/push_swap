/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:06:55 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/18 19:28:55 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exec_pa(stack *a, stack *b)
{
	int	i;
	int	buf;

	i = 0;
	buf = 0;
	if (b->size > 0)
	{
		buf = b->array[0];
		while (i < b->size - 1)
		{
			b->array[i] = b->array[i + 1];
			i++;
		}
		b->array[i] = 0;
		b->size--;
		a->size++;
		i = a->size;
		while (i > 0)
		{
			a->array[i] = a->array[i - 1];
			i--;
		}
		a->array[0] = buf;
	}
	write(1, "pa\n", 3);
}

void	exec_pb(stack *a, stack *b)
{
	int	i;
	int	buf;

	i = 0;
	buf = 0;
	if (a->size > 0)
	{
		buf = a->array[0];
		while (i < a->size - 1)
		{
			a->array[i] = a->array[i + 1];
			i++;
		}
		a->array[i] = 0;
		a->size--;
		b->size++;
		i = b->size;
		while (i > 0)
		{
			b->array[i] = b->array[i - 1];
			i--;
		}
		b->array[0] = buf;
	}
	write(1, "pb\n", 3);
}
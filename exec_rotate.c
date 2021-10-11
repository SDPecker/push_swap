/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:06:47 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/11 17:56:48 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exec_rx(stack s1)
{
	int	i;
	int	buf;

	i = 0;
	buf = s1.array[0];
	if (s1.size >= 2)
	{
		while (i < s1.size - 1)
		{
			s1.array[i] = s1.array[i + 1];
			i++;
		}
		s1.array[i] = buf;
	}
}

void	exec_rrx(stack s1)
{
	int	i;
	int	buf;

	i = s1.size - 1;
	buf = s1.array[s1.size - 1];
	if (s1.size >= 2)
	{
		while (i > 0)
		{
			s1.array[i] = s1.array[i - 1];
			i--;
		}
		s1.array[i] = buf;
	}
}

void	exec_rr(stack s1, stack s2)
{
	exec_rx(s1);
	exec_rx(s2);
}

void	exec_rrr(stack s1, stack s2)
{
	exec_rrx(s1);
	exec_rrx(s2);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:06:43 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/11 17:46:37 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exec_sx(stack s1)
{
	int	buf;
	buf = s1.array[0];

	if (s1.size > 1)
	{
		s1.array[0] = s1.array[1];
		s1.array[1] = buf;
	}
}

void	exec_ss(stack s1, stack s2)
{
	exec_sx(s1);
	exec_sx(s2);
}
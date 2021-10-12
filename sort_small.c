/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:37:43 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/11 16:13:30 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(stack st)
{
	if (get_min_ind(st) == 0)
	{
		if (get_max_ind(st) == 1)
		{
			write(1, "rra\nsa\n", 7);
			exec_rrx(st);
			exec_sx(st);
		}
	}
	else if (get_max_ind(st) == 0)
	{
		if (get_min_ind(st) == 1)
			exec_ra(st);
		else
		{
			exec_sa(st);
			exec_rra(st);
		}
	}
	else
	{
		if (get_min_ind(st) == 1)
			exec_sa(st);
		else
			exec_rra(st);
	}
}

void	sort_5(stack a, stack b)
{
	exec_pb(a, b);
	exec_pb(a, b);
	sort_3(a);
	if (get_max_ind(b) == 0)
		exec_sb(b);
	
}
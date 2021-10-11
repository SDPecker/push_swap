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
			write(1, "rra\nsa\n", 7);
	}
	else if (get_max_ind(st) == 0)
	{
		if (get_min_ind(st) == 1)
			write(1, "rra\nrra\n", 8);
		else
			write(1, "sa\nrra\n", 7);
	}
	else
	{
		if (get_min_ind(st) == 1)
			write (1, "sa\n", 3);
		else
			write (1, "rra\n", 4);
	}
}

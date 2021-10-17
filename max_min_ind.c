/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_ind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:43:25 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/17 20:02:35 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_ind(stack st)
{
	int	res;
	int	i;

	res = 0;
	i = 1;
	while (i < st.size)
	{
		if (st.array[i] > st.array[res])
			res = i;
		i++;
	}
	return (res);
}

int	get_min_ind(stack st)
{
	int	res;
	int	i;

	res = 0;
	i = 1;
	while (i < st.size)
	{
		if (st.array[i] < st.array[res])
			res = i;
		i++;
	}
	return (res);
}

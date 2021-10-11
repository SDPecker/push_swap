/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:06:55 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/11 17:27:47 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exec_px(stack dst, stack src)
{
	int	i;
	int	buf;

	i = 0;
	buf = 0;
	if (!src.size)
	{
		buf = src.array[0];
		while (i < src.size - 1)
		{
			src.array[i] = src.array[i + 1];
			i++;
		}
		src.array[i] = 0;
		src.size--;
		dst.size++;
		i = dst.size;
		while (i > 0)
		{
			dst.array[i] = dst.array[i - 1];
			i--;
		}
		dst.array[0] = buf;
	}
}
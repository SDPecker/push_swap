/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_doubles.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:06:36 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/06 15:27:46 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_doubles(int	*arr, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < i)
		{
			if (arr[j] == arr[i])
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
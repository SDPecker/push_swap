/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:13 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/06 15:27:46 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(const char *ln)
{
	int	i;

	i = 1;
	if (!ft_isdigit(ln[0]) && ln[0] != '-')
		return (0);
	while (ln[i])
	{
		if (!ft_isdigit(ln[i++]))
			return (0);
	}
	return (1);
}
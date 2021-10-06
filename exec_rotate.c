/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:06:47 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/06 15:28:39 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	exec_rx(int *s1, int size)
{
	int	i;
	int	buf;

	i = 0;
	buf = s1[0];
	if (size >= 2)
	{
		while (i < size - 1)
		{
			s1[i] = s1[i + 1];
			i++;
		}
		s1[i] = buf;
	}
}

void	exec_rrx(int *s1, int size)
{
	int	i;
	int	buf;

	i = size - 1;
	buf = s1[size - 1];
	if (size >= 2)
	{
		while (i > 0)
		{
			s1[i] = s1[i - 1];
			i--;
		}
		s1[i] = buf;
	}
}

void	exec_rr(int *s1, int *s2, int size1, int size2)
{
	exec_rx(s1, size1);
	exec_rx(s2, size2);
}

void	exec_rrr(int *s1, int *s2, int size1, int size2)
{
	exec_rrx(s1, size1);
	exec_rrx(s2, size2);
}
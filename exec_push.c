/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:06:55 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/06 15:27:46 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	exec_px(int *dst, int *src, int size_dst, int size_src)
{
	int	i;
	int	buf;

	i = 0;
	buf = 0;
	if (!size_src)
	{
		buf = src[0];
		while (i < size_src - 1)
		{
			src[i] = src[i + 1];
			i++;
		}
		src[i] = 0;
		size_src--;
		size_dst++;
		i = size_dst;
		while (i > 0)
		{
			dst[i] = dst[i - 1];
			i--;
		}
		dst[0] = buf;
	}
}
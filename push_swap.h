/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:44 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/11 17:56:48 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct stack{
int	*array;
int	size;
}stack;

void	exec_px(stack dst, stack src);
void	exec_rx(stack s1);
void	exec_rrx(stack s1);
void	exec_rr(stack s1, stack s2);
void	exec_rrr(stack s1, stack s2);
void	exec_sx(stack s1);
void	exec_ss(stack s1, stack s2);

int		is_number(const char *ln);
stack	input_to_stack(char **input, int n);
void	free_stack(stack st);
int		has_doubles(stack st);
int		get_max_ind(stack st);
int		get_min_ind(stack st);
void	sort_3(stack st);
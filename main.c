/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:38 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/17 20:08:14 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{	
	stack	a;
	//stack	b;
	if (!input_correct(argv, argc))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	a = input_to_stack(argv, argc);
	a = exec_ra(&a);
	print_stack(a);


	//while (1) {} //LEAK TEST
	
	return (0);
}
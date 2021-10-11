# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 16:32:34 by amohiam           #+#    #+#              #
#    Updated: 2021/10/11 17:02:39 by amohiam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = exec_push.c exec_rotate.c exec_swap.c has_doubles.c input_to_stack.c is_number.c is_sorted.c main.c max_min_ind.c sort_3.c
FLAGS = -Wall -Wextra -Werror
all:
	make re -C ./libft
	make clean -C ./libft
	gcc $(FLAGS) $(SOURCES) -o push_swap

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 07:55:41 by hbourgeo          #+#    #+#              #
#    Updated: 2022/04/14 12:00:44 by hbourgeo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = #-Wall -Werror -Wextra
NAME = push_swap
DEPS = push_swap.h

SRC = 	main.c				\
		list.c				\
		error_handling.c	\

all: $(NAME)

$(NAME) : $(SRC) $(DEPS)
	make -C ft_printf
	$(CC) $(CFLAGS) $(SRC) ft_printf/libftprintf.a -o $@

clean :
	rm -rf $(NAME)
	make clean -C ft_printf

fclean : clean
	make fclean -C ft_printf

re : fclean all

.PHONY : clean fclean all re
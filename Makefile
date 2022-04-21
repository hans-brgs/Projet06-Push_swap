# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 07:55:41 by hbourgeo          #+#    #+#              #
#    Updated: 2022/04/21 18:08:10 by hbourgeo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

# Get DIR
INC_DIR = include/
SRC_DIR = src/
OBJ_DIR = obj_$(basename $(NAME))/

# Edit FLAGS
CC = gcc 
CFLAGS = -Wall -Werror -Wextra -I $(INC_DIR) 
DEPS = $(shell find $(INC_DIR) -type f -name "*.h")
LIBFT = libft/libft.a

SRCS = $(notdir $(shell find $(SRC_DIR) -type f -name "*.c"))
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

# Add search path
VPATH = $(INC_DIR) $(OBJ_DIR) $(LIBFT) $(shell find $(SRC_DIR) -type d)

all: $(NAME) $(LIBFT)

$(LIBFT) :
	make -C libft

$(OBJ_DIR)%.o : %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)

$(NAME) : $(OBJ_DIR) $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $@

clean :
	rm -rf $(OBJS)
	rm -rf $(OBJ_DIR)
	make clean -C libft

fclean : clean
	make fclean -C libft
	rm -rf $(NAME)
	

re : fclean all

.PHONY : clean fclean all re

print-%: ; @echo $* = $($*)

# GIT

MSG = "default"
 
git: 
	@-git add .
	@git commit -am "`date +'%m-%d-%Y %H:%M:%S'` | $(MSG)"
	@-git push
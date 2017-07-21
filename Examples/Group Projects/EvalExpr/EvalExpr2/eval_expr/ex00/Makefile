# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ropatel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/16 21:12:39 by ropatel           #+#    #+#              #
#    Updated: 2017/07/16 21:26:52 by ropatel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = eval_expr

HEADER = -I.

FLAGS = -Wall -Werror -Wextra

FILES = main.c ft_atoi.c ft_putchar.c ft_putstr.c ft_putnbr.c eval_expr.c ft_parse_atom.c ft_parse_factor.c ft_result.c

OBJ = main.o ft_atoi.o ft_putchar.o ft_putstr.o ft_putnbr.o eval_expr.o ft_parse_atom.o ft_parse_factor.o ft_result.o 

all:
	$(CC) $(FLAGS) -c $(FILES) $(HEADER)
	$(CC) $(OBJ) -o $(NAME)

PHONY: clean
clean:
	rm -f $(OBJ)

PHONY: fclean
fclean: clean
	rm -f $(NAME)

PHONY: re
re: fclean all

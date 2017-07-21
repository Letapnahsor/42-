# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ropatel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 20:39:31 by ropatel           #+#    #+#              #
#    Updated: 2017/07/13 23:32:59 by ropatel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
CC = gcc
SRC = ft_cat.c ft_putchar.c ft_putstr.c 
FLAGS = -Wall -Wextra -Werror
OPTION = -I.
OBJECTS = ft_display_file.o ft_putchar.o ft_putstr.o

all: $(NAME)

$(NAME): 
	$(CC) $(FLAG) $(OPTION) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

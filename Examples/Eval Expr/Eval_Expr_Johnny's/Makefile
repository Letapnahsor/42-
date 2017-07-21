# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 13:01:35 by jtahirov          #+#    #+#              #
#    Updated: 2017/07/16 09:52:47 by jtahirov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR = ar
CC = gcc
SRC = $(wildcard ./srcs/*.c)
HDR_PATH = include
OBJ = ./*.o
NAME = eval_express  
CFLAGS = -Wall -Wextra -Werror -I $(HDR_PATH) 
ARFLAGS = -cqv

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) -o $(NAME) $(CFLAGS) $^

.PHONY: clean
clean:
	@rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	@rm -f $(NAME)

.PHONY: re
re: fclean all

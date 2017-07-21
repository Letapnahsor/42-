/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filetest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:06:30 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/13 17:06:39 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


CC = gcc

NAME = ft_display_file

SRC = print.c main.c
OBJ = print.o main.o

HEADER = header.h

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
$(CC) $(CFLAGS) $(SRC)
$(CC) $(OBJ) -o $(NAME)

clean:
/bin/rm -f print.o main.o

fclean: clean
/bin/rm -f $(NAME)

// main

#include "header.h"

int	main(int argc, char **argv)
{
    int fd;
    int ret;
    char buf[BUF_SIZE + 1];
    
    if (argc == 1)
    {
        ft_puterror("File name missing.\n");
        return (0);
    }
    if (argc > 2)
    {
        ft_puterror("Too many arguments.\n");
        return (0);
    }
    fd = open(argv[1], O_RDONLY);
    while ((ret = read(fd, buf, BUF_SIZE)))
    {
        buf[ret] = '\0';
        ft_putstr(buf);
    }
    close(fd);
    return (0);
}

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
    if (!root)
    {
        if (root->left)
            btree_apply_suffix(root->left, applyf);
        if (root->right)
            btree_apply_suffix(root->right, applyf);
        (*applyf)(root->item);
    }
}

//day13 ex04

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
    t_btree	*btree;
    
    btree = (t_btree*)malloc(sizeof(t_btree));
    if (btree)
    {
        btree->left = 0;
        btree->right = 0;
        btree->item = item;
    }
    return (btree);
}

// ft_putnbr.c

#include	"ft.h"

void		ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
    }
}



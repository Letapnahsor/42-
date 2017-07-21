/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 17:20:29 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/02 18:20:42 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c)
{
	printf("%d", 1); 
	return (0);
}

char left_side = '/';
char right_side = '\\';
char middle_star = '*';

void		sastantua(int size);

void		ft_build(size)
{
	int column;

	if (column < size)
	{
		ft_putchar(left_side);
		column--;
	}

}

int		main()
{
	sastantua(5);
	return (0);
}



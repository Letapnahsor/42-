/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 22:00:40 by ropatel           #+#    #+#             */
/*   Updated: 2017/06/30 17:19:02 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_putchar(char c)
{	
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char c;

	c = 'A';
	while (c <= 'Z')
	{
		ft_putchar(c);
		c++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}

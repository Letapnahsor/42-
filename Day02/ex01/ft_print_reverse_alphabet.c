/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 01:45:26 by ropatel           #+#    #+#             */
/*   Updated: 2017/06/30 17:29:09 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c,1);
	return(0);
}

void	ft_print_alphabet(void)
{
	char c;

	c = 122;
	while (c >= 97)
	{
		ft_putchar(c);
		c--;
	}
}

int		main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}

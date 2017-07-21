/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 15:23:58 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/18 15:29:27 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(void)
{
	int		i;

	i = 9;
	while (i >= 0)
	{
		ft_putchar(i + '0');
		i--;
	}
	ft_putchar('\n');
	return (0);
}

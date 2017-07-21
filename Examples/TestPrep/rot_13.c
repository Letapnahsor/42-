/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 01:03:05 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/19 01:51:04 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_rot(char c)
{
	if (!((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M') || (c >= 'n' && c <= 'z') || (c >= 'n' && c <= 'z')))
	{
		return (c);
	}
	else if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M')) 
	{
		c += 13;
	}
	else if ((c >= 'n' && c <= 'z') || (c >= 'n' && c <= 'z'))
	{
		c -= 13;
	}
	return (c);
}

int		main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		ft_putchar(ft_rot(argv[1][i]));
		i++;
	}
	ft_putchar('\n');
	return (0);
}

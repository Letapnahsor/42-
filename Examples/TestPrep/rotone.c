/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 12:51:03 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/19 15:25:34 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_rotone(char c)
{
	if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y')) 
	{
		c += 1;
	}
	else if ((c == 'z') || (c == 'Z'))
	{
		c -= 25;
	}
	else if (!((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y')))
	{
		return (c);
	}
	return (c);
}

int		main(int argc, char **argv)
{
	int i;
	char r;

	i= 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		r = ft_rotone(argv[1][i]);
		ft_putchar(r);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 21:27:29 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/20 16:40:11 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_change(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		return (c);
	}
	else if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	else if(c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

int			main(int argc, char **argv)
{
	int		i;
	char	change;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		change = ft_change(argv[1][i]);
		ft_putchar(change);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

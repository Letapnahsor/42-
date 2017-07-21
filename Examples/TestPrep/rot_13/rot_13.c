/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:04:23 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/14 16:32:02 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rot_13(char c)
{
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c<= 'm'))
			c = c + 13;
	else if (( c >= 'N' && c<= 'Z') || (c >= 'n' && c <= 'z'))
			c = c - 13;
	return (c);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			ft_putchar(rot_13(argv[1][i]));
			i++;
		}
		ft_putchar('\n');
		return (0);
	}
}

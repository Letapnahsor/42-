/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 18:57:22 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/18 22:58:20 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_count(char c)
{
	int		repeat;
	
	repeat = 1;
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
	{
		return (repeat);
	}
	if (c >= 'A' && c <= 'Z')
	{
		repeat = c - 64;
	}
	if (c >= 'a' && c <= 'z')
	{
		repeat = c - 96;
	}
	return (repeat);
}

int		main(int argc, char **argv)
{
	int	i;
	int count;

	i= 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			count = ft_count(argv[1][i]);
			while (count > 0)
			{
				ft_putchar(argv[1][i]);
				count--;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

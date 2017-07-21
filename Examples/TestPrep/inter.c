/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 22:06:17 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/20 21:08:56 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_first(char *str, char c, int len)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break;
		i++;
	}
	if (i == len)
		return (1);
	return (0);
}

int		is_instring(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *str, char *str2)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_instring(str2, str[i]) && is_first(str, str[i], i))
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}


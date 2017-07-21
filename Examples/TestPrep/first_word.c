/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 02:07:04 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/19 03:23:08 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else if ((argv[1][i] == ' ') || (argv[1][i] == '\t'))
		i++;
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] != ' ') && (argv[1][i] != '\t'))
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		if ((argv[1][i] == ' ') || (argv[1][i] == '\t'))
		{
			ft_putchar('\n');
			return (0);
		}
	}
	ft_putchar('\n');
	return (0);
}

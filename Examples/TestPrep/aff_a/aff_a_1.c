/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:19:35 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/18 15:16:46 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc , char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar( 'a');
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == 'a')
		{
			ft_putchar('a');
			break;
		}
		i++;
	}	
	ft_putchar('\n');
	return (0);
}

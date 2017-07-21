/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 21:09:12 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/20 23:17:57 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check(char *str, int m)
{
	int		i;

	i = 0;
	while (i < m)
	{
		if (str[i] == str[m])
			return (0);
		i++;
	}
	return (1);
}	

int		main (int argc, char **argv)
{
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (check(argv[1], i))	
			{
				while (argv[2][j] != '\0')
				{	
				
					if (argv[1][i] == argv[2][j])
					{
						ft_putchar(argv[1][i]);
						j++;
						break;

					}	
				}
			}
			i++;
		}
	}
}

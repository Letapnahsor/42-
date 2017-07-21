/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 20:28:38 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/20 20:48:40 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_change(char c)
{

	if (c >= 'a' && c <= 'z') 		
			c = ('z' - (c - 'a')); 
	else if (c >= 'A' && c <= 'Z')
			c = ('Z' - (c - 'A'));
	return (c);
}


int		main(int argc, char **argv)
{
	int		i;
	int		t;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			t = ft_change(argv[1][i]);
			ft_putchar(t);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

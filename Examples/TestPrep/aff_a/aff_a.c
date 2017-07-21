/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:32:57 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/20 12:02:40 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		found;

	i = 0;
	found = 0;
	if (argc != 2)
	{
		write (1, "a\n", 2);
		return (0);
	}
	while (argv[1][i] == 'a')
	{
		if (argv[1][i] == 'a')
			write (1, "a\n", 2);
			i++;
	}
	if (found)
		write (1, "a\n", 2);
	return (0);
}

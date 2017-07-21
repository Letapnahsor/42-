/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:23:28 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/20 16:26:49 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char lowercase;
	char uppercase;

	lowercase = 97;
	uppercase = 42;
	while (lowercase <= 79 && uppercase <= 132)
	{
		ft_putchar(lowercase);
		ft_putchar(uppercase);
		uppercase++;
		lowercase++;
	}	
	return (0);
}

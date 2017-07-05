/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 22:12:55 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/01 22:58:46 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power (int nb, int power)

{
	int r;
	r = 1;

	if (power < 0)
	{
		return (0);
	}
	while (power)
	{
		r = r*nb;
		power--;
	}
	return (r);
}

int	main(void)
{
	printf("%d", ft_iterative_power(5, 0));
	return (0);
}

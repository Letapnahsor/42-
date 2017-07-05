/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 10:50:02 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/02 17:35:20 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int sum;

	sum = nb;
	if (nb > 12)
	{
		return (0);
	}
	while (nb > 1)
	{
		nb --;
		sum = (sum * nb);
	}
	return(0);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(13));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 19:54:11 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/01 21:39:50 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ft_recursive_factorial(int nb)
{
	int num;

	num = nb;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (num);
	}
	else
	{
		nb--;
		num = num * ft_ft_recursive_factorial(nb);
		return (num);
	}
}

int		main(void)
{
	printf("%d", ft_ft_recursive_factorial(7));
	return (0);
}

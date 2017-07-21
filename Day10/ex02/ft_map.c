/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:39:56 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/11 16:20:19 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*tab_2;

	i = 0;
	tab_2 = (int *)malloc(sizeof(int) * (length));
	while (i < length)
	{
		tab_2[i] = f(tab[i]);
		i++;
	}
	return (tab_2);
}

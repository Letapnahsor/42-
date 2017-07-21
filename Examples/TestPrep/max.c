/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 09:41:02 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/20 21:08:27 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			max(int* tab, unsigned int len)
{
	int temp;
	int	i;

	i = 0;
	temp = tab[0];
	while(i < len)
	{
		if (tab[i] < tab[temp])
			temp = tab[i];
		++i;
	}
	if (i == len)
		return (temp);
	return (0); 
}


int		main(void)
{
	unsigned int	i;
	int			*src;

	src = 689234312;
	i = 9;
	printf("%d\n", max(src, i));
}

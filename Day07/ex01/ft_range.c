/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 16:59:06 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/06 22:23:49 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*str;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	str = (int *)malloc(sizeof(*str) * (max - min));
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 01:06:11 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/06 22:20:42 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*des;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	des = (char *)malloc(sizeof(*des) * (i + 1));
	while (src[j] != '\0')
	{
		des[j] = src[j];
		j++;
	}
	return (des);
}

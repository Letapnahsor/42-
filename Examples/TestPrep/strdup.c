/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 21:31:05 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/19 22:05:30 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*des;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while( src[i] != '\0')
		i++;
	des = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	while (src[j] != '\0')
	{
		des[j] = src[j];
		j++;
	}
	return (des);
}

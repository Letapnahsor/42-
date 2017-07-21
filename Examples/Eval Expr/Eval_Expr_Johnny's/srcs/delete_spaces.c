/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_space.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 15:38:07 by jtahirov          #+#    #+#             */
/*   Updated: 2017/07/16 16:18:57 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdlib.h>

char	*delete_space(char *str)
{
	char	*new;
	int		counter;

	new = malloc(sizeof(char) * ft_strlen(str));
	counter = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\n' && *str != '\t')
		{
			*new = *str;
			new++;
			counter++;
		}
		str++;
	}
	*new = '\0';
	return (new - counter);
}

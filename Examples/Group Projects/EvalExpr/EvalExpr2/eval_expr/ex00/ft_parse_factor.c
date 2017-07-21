/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_factor.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 15:17:10 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/16 22:21:34 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_parse_factor(char **str)
{
	int		nb;
	int		nb2;
	char	x;

	nb = ft_parse_atom(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		x = **str;
		if (x != '/' && x != '%' && x != '*')
			return (nb);
		(*str)++;
		nb2 = ft_parse_atom(str);
		if (x == '*')
			nb *= nb2;
		else if (x == '/')
			nb /= nb2;
		else
			nb %= nb2;
	}
	return (nb);
}

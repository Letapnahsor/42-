/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_result.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 19:43:18 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/16 22:14:15 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_result(char **str)
{
	int		nb;
	int		nb2;
	char	x;

	nb = ft_parse_factor(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		x = **str;
		if (x != '+' && x != '-')
			return (nb);
		(*str)++;
		nb2 = ft_parse_factor(str);
		if (x == '+')
			nb += nb2;
		else
			nb -= nb2;
	}
	return (nb);
}

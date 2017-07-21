/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_atom.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 21:16:20 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/16 22:11:23 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_parse_atom(char **str)
{
	int		nb;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		nb = ft_result(str);
		if (**str == ')')
			(*str)++;
		return (nb);
	}
	return (ft_atoi(str));
}

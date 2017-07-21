/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:55:02 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/12 23:26:55 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list		*ls;

	ls = begin_list;
	if (ls)
	{
		while (ls->next)
			ls = ls->next;
		return (ls);
	}
	return (ls);
}

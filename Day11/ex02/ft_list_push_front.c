/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 09:10:03 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/12 23:31:52 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_list_push_front(t_list **begin_list, void *data)
{
	t_list			*ls;

	if (*begin_list)
	{
		ls = ft_create_elem(data);
		ls->next = *begin_list;
		*begin_list = ls;
	}
	else
		*begin_list = ft_create_elem(data);
}

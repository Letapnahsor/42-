/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:34:29 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/13 20:43:01 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

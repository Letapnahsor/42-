/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:38:04 by rliu              #+#    #+#             */
/*   Updated: 2017/07/03 18:35:32 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	initialize(int *i, int *nb, int *neg)
{
	*i = 0;
	*nb = 0;
	*neg = 1;
}

void	handle(char *str, int *i)
{
	while ((str[*i] == ' ') || (str[*i] == '\t') || (str[*i] == '\n')
			|| (str[*i] == '\v') || (str[*i] == '\f') || (str[*i] == '\r'))
		(*i)++;
}

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int neg;

	initialize(&i, &nb, &neg);
	handle(str, &i);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	if (str[i] > 57 || str[i] < 48)
		return (0);
	while ((str[i] >= 48 && str[i] <= 57) || str[i] != '\0')
	{
		if (str[i] > 57 || str[i] < 48)
			return (nb * neg);
		nb = (nb * 10 + (str[i] - 48));
		i++;
	}
	return (nb * neg);
}

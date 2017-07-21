/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 19:41:20 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/21 02:09:49 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_atoi(const char *str)
{
	int result;
	int	sign;

	result = 0;
	sign = 1;
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str++ - '0';
	}
	return (sign * result);
}

int		main (void)
{
	char str [] = "  - 45";
	ft_atoi(str);
	printf("%s\n", str);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 01:20:35 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/21 02:17:28 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int			ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		negative;

	i = 0;

	while( str[i] < 33)
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = nbr * 10;
		nbr = nbr + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}

int		main()
{

	char *str;
   	str = " - 12314124 ";
	ft_atoi(str);
	printf ("%s\n", str);
	return (0);	
}

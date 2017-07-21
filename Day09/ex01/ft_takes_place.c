/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:24:51 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/07 14:44:59 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		h;
    
    if (hour >12)
        h = hour % 12;
    if (hour == 0)
        h = 12;
    printf("THE FOLLOWING TAKES PLACE BETWEEN ");
    if (hour >= 1 && hour <= 10)
		printf("%d.00 A.M. AND %d.00 A.M.\n", h, h + 1);	
    else if (hour == 11 )
		printf("11.00 A.M. AND 12.00 P.M.\n");
    else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	if (hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
    else if (hour >= 11 && hour <= 22)
        printf("%d.00 P.M. AND %d.00 P.M.\n", h, (h + 1) % 12);
}

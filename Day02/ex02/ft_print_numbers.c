/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 02:01:31 by ropatel           #+#    #+#             */
/*   Updated: 2017/06/29 16:49:09 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void)
{
	int i;

	i = '1';
	while (i <= '9')
	{
		ft_putint(i);
		i++;
	}
}

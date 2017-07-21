/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:57:37 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/07 15:22:34 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_collatz_conjecture(unsigned int base)
{
	int c;

	if (base == 1)
	{	
		return (base);
	}
	if (base % 2 == 0)
	{
		base = base/2;
	}
	else
	{
		base = (base * 3) + 1;
	return (ft_collatz_conjecture(base) + 1)
}

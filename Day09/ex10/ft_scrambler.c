/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:25:35 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/07 15:46:48 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int t_a;
	int t_b;
	int t_c;
	int t_d;

	t_a = ***a;
	t_b = *b;
	t_c = *******c;
	t_d = ****d;
	*******c = t_a;
	****d = t_c;
	*b = t_d;
	***a = t_b;
}

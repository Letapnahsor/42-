/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 22:31:02 by ropatel           #+#    #+#             */
/*   Updated: 2017/06/29 23:33:39 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 48;
	b = 49;
	c = 50;
	while (a <= 55)
	{
		b = a + 1;
		while ((b <= 56) && (c = b + 1))
		{
			while (c <= 57)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_putchar(44);
				ft_putchar(32);
				c++;
			}
			b++;
		}
		a++;
	}
}

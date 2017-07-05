/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:50:53 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/04 23:26:53 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		index;
	char	str[11];

	index = 0;
	if (nb == 0)
	{
		putchar('0');
	}
	if (nb < 0 && nb == -2147483648 )
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	while (nb != 0)
	{
		str[index] = ((nb % 10) + '0');
		nb /= 10;
		index++;
	}
	while (index > 0)
	{
		ft_putchar(str[index - 1]);
		index--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_manipulation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:52:51 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/03 14:13:15 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;
	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	The_Pug_replaces_the_Thug(char *str)
{
	str[0] = ' ';
	str[1] = 'P';	
}

void	Hug_Life(char *str)
{
	str[1] = 'H';
}

void	One_life(char *str)
{
	str[1] = 'O';
	str[2] = 'n';
	str[3] = 'e';
}

void	MDP(char *str)
{
	ft_putchar(str[2]);
	ft_putchar(str[5]);
	ft_putchar(str[11]);
}
int		main(void)
{
	char str1[] = "Thug Life";
	char str2[] = "A mistress and a girlfriend";
	char str3[] = "A MacDaddy Production";
	ft_putstr(str1);	
	ft_putchar('\n');	
	The_Pug_replaces_the_Thug(str1);
	ft_putstr(str1);
	ft_putchar('\n');
	Hug_Life(str1);
	ft_putstr(str1);
	ft_putchar('\n');
	One_life(str1);
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putchar('-');
	ft_putstr(str3);
	ft_putchar('\n');
	ft_putchar('-');
	MDP(str3);
	ft_putchar('\n');
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:58:30 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/11 22:55:15 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_any(char **tab, int (*f)(char*))
{
	int		i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

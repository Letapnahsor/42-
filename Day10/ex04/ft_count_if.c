/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:39:31 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/11 19:38:28 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}

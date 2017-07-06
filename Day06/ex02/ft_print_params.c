/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:57:05 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/05 22:53:05 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		ft_putchar(str[j]);
		j++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argv[i] != '\0')
	{
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
			if (i >= argc)
			{
				return (0);
			}
		}
	}
	return (0);
}

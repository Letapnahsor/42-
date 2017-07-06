/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:21:41 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/05 23:02:20 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_str(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		ft_putchar(argv[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int t;

	t = argc;
	ft_str(*argv);
	ft_putchar('\n');
	return (0);
}

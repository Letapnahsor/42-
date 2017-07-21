/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 22:23:28 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/13 23:39:18 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int	main(int argc, char **argv)
{
	char	arr[BUF_SIZE + 1];
	int		fd;
	int		index;
	int		rd;

	index = 0;
	while (argc > index)
	{
		if (argc == 1 || *argv[1] == '-')
			fd = 0;
		else
			fd = open(argv[index + 1], O_RDONLY);
		if (fd < 0 && (index != argc - 1 || index == argc))
		{
			ft_putstr("cat: ");
			ft_putstr(argv[index]);
			ft_putstr(": No such file or directory\n");
		}
		if (fd < 0)
			return (1);
		rd = read(fd, arr, BUF_SIZE);
		while (rd)
		{
			ft_putstr(arr);
			rd = read(fd, arr, BUF_SIZE);
		}
		arr[rd] = '\0';
		if (close(fd) < 0)
			return (1);
		else
			close(fd);
		index++;
	}
	return (0);
}

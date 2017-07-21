/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:50:16 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/13 22:17:04 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(argv[1], O_RDONLY);
	if (argc == 1) 
		ft_putstr("File name missing.\n");
		return (0);
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
		return (0);
	if (fd == -1 || close(fd) == -1)
		return (1);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	return (0);
}

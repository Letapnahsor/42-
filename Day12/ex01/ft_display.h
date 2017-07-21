/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:23:49 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/13 22:20:56 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H

# include <fcntl.h>
# include <unistd.h>

# define BUF_SIZE 4096

void		ft_putchar(char c);
void		ft_putstr(char *str);

#endif

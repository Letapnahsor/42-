/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 19:21:41 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/16 19:21:54 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

int		atoi_r(char *str, char **ptr);
void	ft_putnbr(int nbr);
void	ft_putchar(char x);
void	ft_putstr(char *str);
int		eval_expr(char **str);
int		solve_expr(char *str);
char	*delete_space(char *str);
int		ft_strlen(char *str);

#endif

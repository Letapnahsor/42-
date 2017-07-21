/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 21:21:41 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/16 22:05:21 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

int		eval_expr(char *str);
int		ft_atoi(char **str);
int		ft_parse_atom(char **str);
int		ft_parse_factor(char **str);
int		ft_result(char **str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif

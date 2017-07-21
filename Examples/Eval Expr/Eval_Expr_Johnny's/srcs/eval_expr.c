/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:23:13 by jtahirov          #+#    #+#             */
/*   Updated: 2017/07/16 16:20:26 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		parse_num(char **str)
{
	char	*ptr;
	int		num;

	if (*(*str) == '(')
	{
		*(str) += 1;
		num = eval_expr(str);
		if (*(*str) == ')')
			*str += 1;
		return (num);
	}
	num = atoi_r(*str, &ptr);
	*str = ptr;
	return (num);
}

int		parse_mul_div(char **str)
{
	int		num1;
	int		num2;
	char	sign;

	num1 = parse_num(str);
	while (1)
	{
		sign = *(*str);
		if (sign != '/' && sign != '*' && sign != '%')
			return (num1);
		*(str) += 1;
		num2 = parse_num(str);
		if (sign == '/')
			num1 /= num2;
		else if (sign == '*')
			num1 *= num2;
		else
			num1 %= num2;
	}
}

int		eval_expr(char **str)
{
	int		num1;
	int		num2;
	char	sign;

	num1 = parse_mul_div(str);
	while (1)
	{
		sign = *(*str);
		if (sign != '-' && sign != '+')
			return (num1);
		*(str) += 1;
		num2 = parse_mul_div(str);
		if (sign == '-')
			num1 -= num2;
		else
			num1 += num2;
	}
}

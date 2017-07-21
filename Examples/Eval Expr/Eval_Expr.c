#include <stdlib.h>

char	*suppr_spaces(char *str)
{
    int	i;
    int	j;
    char	*str2;
    
    i = 0;
    j = 0;
    str2 = malloc(my_strlen(str) + 1);
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str2[j] = str[i];
            j = j + 1;
        }
        i = i + 1;
    }
    str2[j] = '\0';
    return (str2);
}

int	my_parse_nbr(char **ps)
{
    int   nbr;
    int   signe;
    
    nbr = 0;
    signe = 1;
    if ((*ps)[0] == '+' || (*ps)[0] == '-')
    {
        if ((*ps)[0] == '-')
            signe = -1;
        *ps = *ps + 1;
    }
    if ((*ps)[0] == '(')
    {
        *ps = *ps + 1;
        nbr = eval_expr_0(ps);
        if ((*ps)[0] == ')')
            *ps = *ps + 1;
        return (signe * nbr);
    }
    while('0' <= (*ps)[0] && (*ps)[0] <= '9')
    {
        nbr = (nbr * 10) + (*ps)[0] - '0';
        *ps = *ps + 1;
    }
    return (signe * nbr);
}

int	eval_expr_0(char **ps)
{
    int	lhs;
    int	rhs;
    char	op;
    
    lhs = my_parse_nbr(ps);
    while ((*ps)[0] != '\0' && (*ps)[0] != ')')
    {
        op = (*ps)[0];
        *ps = *ps + 1;
        if (op == '+' || op == '-')
            rhs = eval_expr_1(ps);
        else
            rhs = my_parse_nbr(ps);
        lhs = do_op(lhs, rhs, op);
    }
    return (lhs);
}

int	eval_expr_1(char **ps) //Precedence
{
    int	lhs;
    int	rhs;
    char	op;
    
    lhs = my_parse_nbr(ps);
    while ((*ps)[0] == '*' || (*ps)[0] == '/' || (*ps)[0] == '%')
    {
        op = (*ps)[0];
        *ps = *ps + 1;
        rhs = my_parse_nbr(ps);
        lhs = do_op(lhs, rhs, op);
    }
    return (lhs);
}

int	eval_expr(char *str)
{
    str = suppr_spaces(str);
    if (str[0] == '\0')
        return (0);
    return (eval_expr_0(&str));
}


///


eval_expr

#include "header.h"

int		ft_do_op(char *str)
{
    int		j;
    int		left;
    int		right;
    int		priority;
    char	*s;
    
    priority = -1;
    while (++priority <= 1)
    {
        s = str - 1;
        while (*++s)
        {
            j = -1;
            while (g_optab[priority][++j].c)
                if (*s == g_optab[priority][j].c)
                {
                    right = eval_expr(s + 2);
                    str[s - str - 1] = '\0';
                    left = eval_expr(str);
                    return ((g_optab[priority][j].func)(left, right));
                }
        }
    }
    return (ft_atoi(str));
}

char	*eval_parenth(char *str)
{
    char	*inside;
    char	*after;
    int		i;
    int		j;
    int		nb_par;
    
    i = 0;
    while (str[i] != '(' && str[i])
        i++;
    if (!str[i])
        return (str);
    inside = ft_strdup(str + i + 1);
    nb_par = 1;
    j = i;
    while (nb_par && str[j++])
    {
        nb_par += (str[j] == '(') ? 1 : 0;
        nb_par -= (str[j] == ')') ? 1 : 0;
    }
    inside[j - i - 1] = '\0';
    after = ft_strdup(str + j + 1);
    str[i] = '\0';
    inside = ft_itoa(eval_expr(inside));
    return (ft_strcat(ft_strcat(str, inside), after));
}

char	*ft_parse_minus(char *str)
{
    int		i;
    char	*before;
    char	*out;
    char	*buf;
    
    i = 0;
    out = str;
    while (str[i])
    {
        if (out[i] == '-' && out[i + 1] == ' ')
        {
            buf = ft_strdup(out);
            before = ft_strdup(out);
            before[i] = '\0';
            if (out != str)
                free(out);
            out = malloc(sizeof(char) * (ft_strlen(out) + 2));
            out = ft_strcat(ft_strcat(before, "+ -"), buf + i + 2);
            free(buf);
            free(before);
            i += 2;
        }
        i++;
    }
    return (out);
}

int		eval_expr(char *str)
{
    char	*a;
    
    str = eval_parenth(str);
    if (*str != '-')
        str = ft_parse_minus(str);
    return (ft_do_op(str));
}

int		main(int ac, char **av)
{
    if (ac > 1)
    {
        ft_putnbr(eval_expr(av[1]));
        ft_putchar('\n');
    }
    return (0);
}




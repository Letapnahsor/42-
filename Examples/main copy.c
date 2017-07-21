/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ropatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:49:56 by ropatel           #+#    #+#             */
/*   Updated: 2017/07/06 16:52:33 by ropatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_srncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_stromp(char *s1, char *s2);
int		ft_strncmp(char*s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strdup(char *src);
int		*ft_range(int min, int max);

int		main(void)
{
//	test (0)
//	ft_putstr("Thug Life");

//	test (1)
//	ft_putnbr(0);

//	test (2)
//	ft_atoi(@);
	
//	test (3)
/*	char *dest ="Tricky";  
	char *src = "Test";	
	ft_strcpy(dest, src);*/

//	test (4)
/*	ft_strncpy(dest, src, n);
	char dest[] ="Tricky";
	char src[] ="Test";

	unsigned int n;

	n = 0;
	
	while(dest[n] != '\0')
	{
		n++;
	}
	ft_strncpy(dest, src, n);
	printf("%s". dest);*/

	//char *str = "Can you find me here?";
	//char *to_find = "me";

//	ft_strstr(str, to_find)

 //   char *src;
  //   src = "asdf";
 //   des = ft_strdup(src);
 //   printf("Duplicated string is : %s", des);
    int* res;
    int i;
    res = ft_range(5, 10);
    for (i = 0; i < 5; i++)
    printf("%d", res[i]);
    printf("\n");
    return (0);
}

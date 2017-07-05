//
//  ft_strncpy.c
//  
//
//  Created by Roshan Patel on 7/4/17.
//
//

#include "ft_strncpy.h"
#include <stdio.h>

void    ft_putstr(char *str);
void    ft_putnbr(int nb);
void    ft_atoi(char *str);
char    *ft_strcpy(char *dest, char *src);
char    *ft_srncpy(char *dest, char *src, unsigned int n);
char    *ft_strstr(char *str, char *to_find);
int        ft_stromp(char *s1, char *s2);
int        ft_strncmp(char*s1, char *s2, unsigned int n);
char    *ft_strupcase(char *str);
char    *ft_strlowcase(char *str);
char    *ft_strcapitalize(char *str);
int        ft_str_is_alpha(char *str);
int        ft_str_is_numeric(char *str);
int        ft_str_is_lowercase(char *str);
int        ft_str_is_uppercase(char *str);
int        ft_str_is_printable(char *str);
char    *ft_strcat(char *dest, char *src);

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int t;
    
    t = 0;
    
    while (src[t] != '\0' && t < n)
    {
        dest[t] = src[t];
        t++;
    }while (t < n)
    {
        dest[t] = '\0';
        t++;
    }
    return (dest);
}

int        main(void)
{
    //    ft_putstr("Thug Life");
    //    ft_putnbr(0);
    //    ft_atoi(@);
    
    char dest[] = "Tricky";
    char src[] = "Test";
    
    unsigned int n;
    
    n = 0;
    
    while(dest[n] != '\0')
    {
        n++;
    }
    
    ft_strncpy(dest, src, n);
    printf("%s", dest);
    
    return (0);
}

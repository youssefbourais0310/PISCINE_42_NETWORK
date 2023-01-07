
#include <stdio.h>

char    *ft_strlowcase(char *str);
int main()
{
    char c[]= "+-*/A";
    ft_strlowcase(c);
    printf("%s",ft_strlowcase(c));
}
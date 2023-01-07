
#include <stdio.h>

int ft_str_is_alpha(char *str);
int main()
{
    char c[]= "fshwgUDFIYVd";
	ft_str_is_alpha(c);
    printf("%d\n",ft_str_is_alpha(c));
}
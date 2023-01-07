
#include <stdio.h>

int ft_str_is_numeric(char *str);
int main()
{
    char c[]= "";
	ft_str_is_numeric(c);
    printf("%d\n",ft_str_is_numeric(c));
}
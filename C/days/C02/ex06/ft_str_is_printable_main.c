
#include <stdio.h>

int ft_str_is_printable(char *str);
int main()
{
    char c[]= " ";
	ft_str_is_printable(c);
    printf("%d\n",ft_str_is_printable(c));
}
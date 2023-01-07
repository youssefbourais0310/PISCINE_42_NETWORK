
#include <stdio.h>

int ft_str_is_uppercase(char *str);
int main()
{
    char c[]= "AAaAA";
	ft_str_is_uppercase(c);
    printf("%d\n",ft_str_is_uppercase(c));
}
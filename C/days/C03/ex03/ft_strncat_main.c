
#include <stdio.h>

char	*ft_strncat(char	*dest,	char *src, unsigned int nb);
int main()
{
    char dest[] = "youssef ";
    char src[] = "bourais";

    //test[] = strcat(dest, src);
    //printf("%c\n", test);
    printf("%s\n", ft_strncat(dest, src,4));
}
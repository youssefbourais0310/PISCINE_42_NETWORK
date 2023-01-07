#include<string.h>
#include <stdio.h>

char	*ft_strcat(char	*dest,	char *src);
int main()
{
    char dest[] = "youssef ";
    char src[] = "bour";
    //char *test;

    //test = strcat(dest, src);
    //printf("%s\n", test);
    printf("%s\n", ft_strcat(dest, src));
}
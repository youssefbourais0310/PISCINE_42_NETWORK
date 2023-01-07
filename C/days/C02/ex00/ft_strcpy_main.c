#include <stdio.h>
#include <string.h>
char    *ft_strcpy(char *dest, char *src);
int main()
{
    char    src[6] = "Hello";
    char    dest[5];

    ft_strcpy(dest,src);
    printf("%s\n",dest);
    return 0;
}
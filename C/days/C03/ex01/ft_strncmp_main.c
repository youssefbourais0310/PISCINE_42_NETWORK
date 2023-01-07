#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n);
int main()
{
    char s1[] = "hello";
    char s2[] = "helloworld";
    int test ;

    test = strncmp(s1, s2, 3);
    printf("%d\n", test);
    printf("%d\n",ft_strncmp(s1, s2,1));
}
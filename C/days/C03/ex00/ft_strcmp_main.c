#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2);
int main()
{
    char s1[] = "ahh";
    char s2[] = "ahhfxhjfx";
    int test ;

    test = strcmp(s1, s2);
    printf("%d\n", test);
    printf("%d\n",ft_strcmp(s1, s2));
}
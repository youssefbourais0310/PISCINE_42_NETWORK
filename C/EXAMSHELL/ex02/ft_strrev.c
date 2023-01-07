
#include<stdio.h>

int len(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i ++;
    }
    return (i);
}

char    *ft_strrev(char *str)
{
    int i ;
    int j;
    char swap;

    j = len(str)-1;
    i = 0;
    while ( j > i)
    {
        swap = str[i];
        str[i] = str[j];
        str[j] = swap;
        i ++;
        j --;
    }
    return (str);
}   

int main()
{
    char s[] = "siaruob fessuoy";
    printf("%s",ft_strrev(s));
}
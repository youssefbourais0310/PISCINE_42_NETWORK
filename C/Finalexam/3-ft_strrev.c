# include<stdio.h>

int len(char *str)
{
    int i ;

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
    char temp ;

    j = len(str) - 1;
    i = 0;
    while (j > i)
    {
        temp = str[i] ;
        str[i] = str[j];
        str[j] = temp ;
        j --;
        i ++ ;
    }

    return (str);
}
int main()
{
    char c[] = "siaruob fessuoy";
    printf("%s\n",ft_strrev(c));
}
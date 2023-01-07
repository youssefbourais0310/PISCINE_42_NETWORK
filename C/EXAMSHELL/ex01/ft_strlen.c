int len(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i ++;
    return (i);
}

#include<stdio.h>
int main()
{
    printf("%d\n",len("youssef"));
}
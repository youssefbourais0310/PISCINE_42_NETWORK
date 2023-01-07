
void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

#include<stdio.h>

int main()
{
    int x;
    int y;

    x =10;
    y =20;

    printf("old values\nx = %d\ny = %d\n",x,y);
    ft_swap(&x,&y);
    printf("new values \nx = %d\ny = %d\n",x,y);
}
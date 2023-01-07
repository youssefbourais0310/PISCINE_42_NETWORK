#include<unistd.h>
int is_dup(int i,char c, char *str)
{
    while(i >= 0)
    {
        if(str[i] ==c )
            return (1);
        i--;
    }
    return 0;
}
int main(int ac, char **av)
{
    int i;
    int j ;
    if(ac == 3)
    {
        i = 0;
        while(av[1][i] != '\0')
        {
            if(!is_dup(i - 1,av[1][i],av[1]))
                write(1 ,&av[1][i], 1);
            i++;
        }
        j = 0;
        while(av[2][j] != '\0')
        {
            if(!is_dup(j - 1,av[2][j],av[2]) && !is_dup(i,av[2][j],av[1]))
                write(1 ,&av[2][j], 1);
            j++;
        }
    }
    write(1 ,"\n", 1);
}
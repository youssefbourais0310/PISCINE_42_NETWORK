
#include<unistd.h>


int len(char *str)
{
    int i;

    i =0;
    while (str[i] != '\0')
        i ++;
    return (i);
}

char ft_rev_print(char *str)
{
    int i;

    i =len(str) -1;
    while (str[i] != '\0' && i >= 0)
    {
        write(1, &str[i], 1);
        i --;
    }
    return(0);
}

int main()
{
    ft_rev_print("iidaan iridaga buuuuuoya");
}
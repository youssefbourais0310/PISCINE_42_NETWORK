#include<unistd.h>

char *ft_rev_print (char *str)
{
    int i ;
    int j;

    i = 0;
    while (str[i] != '\0')
    {
        i ++;
    }
    j = i - 1;
    while (j >= 0)
    {
        write(1, &str[j], 1);
        j --;
    }
    return(str);
}
int main()
{
    char c[] = "nassah";

    ft_rev_print(c);

}

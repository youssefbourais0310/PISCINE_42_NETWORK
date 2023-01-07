# include <stdio.h>
# include <stdlib.h>

int ft_atoi(char *str)
{
    int res;
    int sign;

    res = 0;
    sign = 1;
    while (str[res] == 32 || (str[res] >= 9 && str[res] <= 13))
    {
        res ++;
    }
    if (str[res] == '-')
    {
        sign = sign * (-1);
    }
    if (str[res] == '-' || str[res] == '+')
    {
        res ++;
    }
    while (str[res] >= '0' && str[res] <= '9')
    {
        res = res * 10 + str[res] - '0';
        res++;
    }
    return(res * sign);   
}

int main()
{
    printf("%d\n", ft_atoi("12345"));
}
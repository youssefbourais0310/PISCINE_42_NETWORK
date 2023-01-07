# include <stdio.h>
# include <stdlib.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i ++;
    }
    while(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = sign * (-1);
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res * sign);   
}

int main()
{
    printf("%d\n", ft_atoi("2222"));
}

# include <stdio.h>
# include <stdlib.h>

int ft_atoi(char *str)
{
    int res;
    int sign;

    res = 0;
    sign = 1;
    while (*str == 32 || (*str >= 9 && *str <= 13))
    {
        str ++;
    }
    if (*str == '-')
    {
        sign = sign * (-1);
    }
    if (*str == '-' || *str == '+')
    {
        str ++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + *str - '0';
        str++;
    }
    return(res * sign);   
}

int main()
{
    printf("%d\n", ft_atoi("12345"));
}
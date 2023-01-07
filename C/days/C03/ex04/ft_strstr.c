/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:55:36 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/02 23:30:14 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
int len(char *len)
{
	int	i;

	i = 0;
	while (len[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
    int a;
    int b;

    a = len(str);
    b = len(to_find);


    for (i =0 ; i < a ; i ++)
    {
        for (j = 0 ; j< b ; j ++)
        {
            if (str[i + j] != to_find[j] && str[i + j] != '\0')
            {
                break;
            }

            else if (j == b && str[i + j] != '\0')
            {
                str[i + j] = to_find[j];
                break;
            }

            else 
            {
                return(0);
            }   
        } 
    }
}

int	main()
{
	char str[] = "youssef";
	char to_find[] = "ss";
	printf("%d", ft_strstr(str, to_find));
}
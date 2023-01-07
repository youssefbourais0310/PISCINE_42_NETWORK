/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 01:50:42 by ybourais          #+#    #+#             */
/*   Updated: 2022/10/12 18:51:56 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int len(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *ft_strstr(char *str, char *find)
{
    int i;
    int j;

    i = 0;
    while(len(find) == 0)
        return(str);
    while(str[i] != '\0')
    {
        j = 0;
        while (find[j] == str[i + j] )
        {
            if(len(find) == j + 1)
                return(str + i);
        j++;   
        }
        i++;
    }
    return (0);
}
#include <stdio.h>

int	main()
{
	char str[] = "abcxabcdabxabcdabcdabcy";
	char find[] = "abcdabcy";
	printf("%s", ft_strstr(str, find));
}
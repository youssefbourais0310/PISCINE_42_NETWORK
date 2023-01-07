/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:04:31 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/11 21:34:43 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	puutstr(char *str)
{
	int	i ;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int	strrcm(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}

void	swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc - 1)
	{
		i = 1;
		while (i < argc -1)
		{
			if (strrcm(argv[i], argv[i + 1]) > 0)
				swap(&argv[i], &argv[i + 1]);
			i ++;
		}
		j ++;
	}
	i = 1;
	while (i < argc)
	{
		puutstr(argv[i]);
		puutstr("\n");
		i++;
	}
}

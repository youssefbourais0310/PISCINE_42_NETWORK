/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:49:10 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/13 01:37:23 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	c = max - min;
	arr = malloc(c * sizeof(int));
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (i < c)
	{
		arr[i] = min + i;
		i++;
	}
	return (c);
}

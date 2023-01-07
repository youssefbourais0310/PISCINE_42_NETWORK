/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:12:36 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/13 00:39:55 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	c;

	c = max - min;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * c);
	if (!arr)
		return (0);
	i = 0;
	while (i < c)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

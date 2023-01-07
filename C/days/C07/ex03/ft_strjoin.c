/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 00:43:51 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/13 01:52:09 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;
	int		j;
	int		k;

	join = (char *)malloc(sizeof (strs));
	if (!join)
		return (0);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			join[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && (i < size - 1))
			join[k++] = sep[j ++];
		i++;
	}
	join[k] = '\0';
	return (join);
}

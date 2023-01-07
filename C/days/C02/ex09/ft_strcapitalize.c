/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:33:24 by ybourais          #+#    #+#             */
/*   Updated: 2022/03/31 02:12:13 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	handler;

	i = 0;
	handler = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && handler == 0)
		{
			str[i] = str[i] - 32;
			handler = 1;
			i++;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') )
			i++;
		else if ((str[i] >= '0' && str[i] <= '9'))
		{	
			
			i++;
		}
		else
		{
			handler = 0;
			i++;
		}
	}
	return (str);
}

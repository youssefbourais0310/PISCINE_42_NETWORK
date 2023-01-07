/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:21:06 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/06 16:19:41 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index <= 1 && index >= 0)
	{
		return (index);
	}
	else if (index < 0)
	{
		return (-1);
	}
	else
	{
		return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
	}
}

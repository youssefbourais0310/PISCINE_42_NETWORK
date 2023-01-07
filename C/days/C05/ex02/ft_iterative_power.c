/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:10:42 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/06 22:38:24 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		while (power != 0)
		{
		res = res * nb;
			power --;
		}
	}
	else if (power < 0)
	{
		return (0);
	}
	return (res);
}

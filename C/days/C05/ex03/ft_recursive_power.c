/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:30:26 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/06 22:36:48 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power == 0 && nb != 0)
		return (1);
	if (power < 0)
		return (0);
	return (ft_recursive_power(nb, power -1) * nb);
}

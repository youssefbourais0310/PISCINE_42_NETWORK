/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:08:42 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/06 20:29:58 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	fact = 1;
	if (nb == 0)
		return (fact);
	else if (nb < 0)
	{
		return (0);
	}
	i = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i ++;
	}
	return (fact);
}

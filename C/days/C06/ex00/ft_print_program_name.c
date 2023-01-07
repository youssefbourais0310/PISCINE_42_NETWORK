/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:05:53 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/09 16:56:44 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	(void) argc;
	i = 0;
	while (argv[0][i] != '\0')
	{
		ft_write(argv[0][i]);
		i ++;
	}
	ft_write('\n');
}

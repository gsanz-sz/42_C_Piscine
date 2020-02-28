/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:36:18 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/11/30 04:30:30 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_transf(int i, int j)
{
	int mod;
	int div;

	div = (i / 10) + 48;
	mod = (i % 10) + 48;
	write(1, &div, 1);
	write(1, &mod, 1);
	write(1, " ", 1);
	div = (j / 10) + 48;
	mod = (j % 10) + 48;
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_transf(i, j);
			if (i != 98 || j != 99)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

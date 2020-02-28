/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 04:25:27 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/11/30 06:50:52 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int num;
	unsigned int mod;

	if (nb < 0)
	{
		write(1, "-", 1);
		num = nb * (-1);
	}
	else
		num = nb;
	if (num > 9)
		ft_putnbr(num / 10);
	mod = num % 10;
	mod = mod + 48;
	write(1, &mod, 1);
}

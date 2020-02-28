/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 06:58:51 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/11 02:43:22 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		count_base(char *base)
{
	int cont;

	cont = 0;
	while (base[cont])
		cont++;
	return (cont);
}

void	transform_base(int nbr, char *base, unsigned int cont)
{
	unsigned int	num;
	int				mod;

	if (nbr < 0)
	{
		write(1, "-", 1);
		num = nbr * (-1);
	}
	else
	{
		num = nbr;
	}
	if (num >= cont)
		transform_base(num / cont, base, cont);
	mod = num % cont;
	write(1, &base[mod], 1);
}

int		ver_base(char *base)
{
	int	cont;
	int	i;

	cont = 0;
	while (base[cont])
	{
		i = 0;
		if (base[cont] == '-' || base[cont] == '+')
			while (base[i])
			{
				if (base[cont] == base[i])
					return (0);
				i++;
			}
		cont++;
	}
	if (cont <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int cont;

	if (ver_base(base))
	{
		cont = count_base(base);
		transform_base(nbr, base, cont);
	}
}

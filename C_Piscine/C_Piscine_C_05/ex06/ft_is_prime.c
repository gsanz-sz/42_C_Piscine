/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:20:09 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/07 01:48:37 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb <= 0)
		return (0);
	while (i * i <= nb && i < 46340)
	{
		if (nb % i == 0)
			return (i);
		i++;
	}
	return (i - 1);
}

int	ft_is_prime(int nb)
{
	int divisor;
	int raiz;

	if (nb % 2 == 0)
		return (nb == 2);
	divisor = 3;
	raiz = ft_sqrt(nb);
	while (divisor <= raiz && nb % divisor != 0)
		divisor += 2;
	return (nb > 1 && divisor > raiz);
}

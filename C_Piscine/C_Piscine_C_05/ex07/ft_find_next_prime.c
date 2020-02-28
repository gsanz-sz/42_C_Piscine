/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 22:28:42 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/06 03:20:41 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb && i < 46340)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	if (nb <= 2)
		return (2);
	else if (ft_is_prime(nb))
		return (nb);
	i = nb + 1;
	while (!ft_is_prime(i))
	{
		if (i % 2 == 0)
			i++;
		else
			i += 2;
	}
	return (i);
}

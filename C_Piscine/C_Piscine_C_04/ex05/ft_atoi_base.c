/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 19:08:48 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/09 09:20:13 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_base_indice(char c, char *str, int ver)
{
	int i;

	i = 0;
	if (ver == 1)
	{
		while (str[i])
		{
			if (c == str[i])
				return (1);
			i++;
		}
		return (0);
	}
	else if (ver == 2)
	{
		while (str	[i] != c)
			i++;
		return (i);
	}
	return (0);
}

int	is_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ' ||
			base[i] == '\f' || base[i] == '\n' || base[i] == '\r' ||
			base[i] == '\t' || base[i] == '\v')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	potencia(int base, int qnt)
{
	int res;

	res = 1;
	while (qnt--)
	{
		res = res * base;
	}
	return (res);
}

int	comp_num(char *str, char *base)
{
	int cont;
	int res;
	int bas;

	cont = 0;
	res = 0;
	bas = 0;
	while (is_base_indice(str[cont], base, 1))
		cont++;
	while (base[bas])
		bas++;
	while (cont--)
	{
		res = res + (potencia(bas, cont) * is_base_indice(*str, base, 2));
		str++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int atoi;
	int neg;

	if (is_base(base))
	{
		atoi = 0;
		while (*str == ' ' || *str == '\f' || *str == '\n' ||
				*str == '\r' || *str == '\t' || *str == '\v')
			str++;
		neg = 0;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				neg++;
			str++;
		}
		atoi = comp_num(str, base);
		if (neg % 2 == 1)
			return (atoi * (-1));
		return (atoi);
	}
	return (0);
}

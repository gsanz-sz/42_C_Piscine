/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 04:41:12 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/09 09:26:25 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	whitespaces(char c)
{
	if (c == ' ' || c == '\f' ||
	c == '\n' || c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	comp_num(char *str)
{
	int i;
	int res;

	i = 1;
	res = 0;
	while (is_num(*str))
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int atoi;
	int neg;

	atoi = 0;
	while (whitespaces(*str))
		str++;
	neg = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg++;
		str++;
	}
	atoi = comp_num(str);
	if (neg % 2 == 1)
		return (atoi * (-1));
	return (atoi);
}

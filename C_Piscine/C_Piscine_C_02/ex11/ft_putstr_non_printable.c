/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 06:48:45 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/13 02:25:26 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	hexa_value(unsigned char c)
{
	if (c >= 0 && c <= 9)
	{
		c += 48;
	}
	else if (c >= 10 && c <= 15)
	{
		c += 87;
	}
	return (c);
}

int		non_printable(unsigned char c)
{
	if (!(c >= 32 && c <= 126))
		return (1);
	return (0);
}

void	ft_putstr_hexa(unsigned char c)
{
	char hex_value1;
	char hex_value2;

	if (c <= 15)
	{
		hex_value1 = hexa_value(c);
		write(1, "\\", 1);
		write(1, "0", 1);
		write(1, &hex_value1, 1);
	}
	else
	{
		hex_value1 = hexa_value(c / 16);
		hex_value2 = hexa_value(c % 16);
		write(1, "\\", 1);
		write(1, &hex_value1, 1);
		write(1, &hex_value2, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	unsigned char c;

	i = 0;
	while (str[i])
	{
		if (non_printable((unsigned char)str[i]))
		{
			ft_putstr_hexa((unsigned char)str[i]);
		}
		else
		{
			c = (unsigned char)str[i];
			write(1, &c, 1);
		}
		i++;
	}
}

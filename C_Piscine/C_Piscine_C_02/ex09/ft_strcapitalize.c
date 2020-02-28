/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 20:25:49 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/11/30 01:19:46 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		isnt_alphanum(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
		if (!(c >= 'a' && c <= 'z'))
			if (!(c >= '0' && c <= '9'))
				return (1);
	return (0);
}

int		is_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	capitalize_carac(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	lowercase_carac(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (is_alpha(str[i]))
		str[i] = capitalize_carac(str[i]);
	while (str[++i])
	{
		if (is_alpha(str[i]))
		{
			if (isnt_alphanum(str[i - 1]))
			{
				str[i] = capitalize_carac(str[i]);
			}
			else
			{
				str[i] = lowercase_carac(str[i]);
			}
		}
	}
	return (str);
}

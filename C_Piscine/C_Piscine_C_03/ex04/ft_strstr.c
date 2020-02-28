/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 21:54:40 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/08 04:54:55 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			while (to_find[i] == str[i])
			{
				i++;
				if (to_find[i] == '\0')
					return (str);
			}
		}
		str++;
	}
	return (0);
}

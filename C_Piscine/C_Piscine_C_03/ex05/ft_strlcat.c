/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 22:52:50 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/08 04:49:05 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				lensrc(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] && i < size)
		i++;
	j = i;
	while (src[i - j] && i + 1 < size)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + lensrc(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 21:22:49 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/05 15:58:26 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*aux;
	unsigned int	i;

	i = 0;
	aux = dest;
	while (*aux)
		aux++;
	while (*src && i < nb)
	{
		*aux = *src;
		aux++;
		src++;
		i++;
	}
	*aux = '\0';
	return (dest);
}

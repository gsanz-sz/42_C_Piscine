/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:13:04 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/05 15:54:10 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int cont;
	int i;

	cont = 1;
	while (cont < argc)
	{
		i = 0;
		while (argv[cont][i])
		{
			ft_putchar(argv[cont][i]);
			i++;
		}
		ft_putchar('\n');
		cont++;
	}
}

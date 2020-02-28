/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:36:34 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/11/30 13:11:30 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	criamenor(int n, int *num)
{
	int i;

	i = 0;
	while (i < n)
	{
		num[i] = i;
		i++;
	}
	return (*num);
}

int		indice(int *num, int n)
{
	int cont;
	int max;
	int i;

	i = -1;
	cont = 0;
	max = 10 - n;
	while (i < n)
	{
		i++;
		if (num[i] == max)
		{
			return (i - 1);
		}
		else if (i == (n - 1) && num[i] < max)
		{
			return (i);
		}
		max++;
	}
	return (1);
}

void	mostra(int *num, int n)
{
	int i;
	int numero;

	i = 0;
	while (i < n)
	{
		numero = num[i] + 48;
		write(1, &numero, 1);
		i++;
	}
}

void	somanum(int ind, int *num, int n)
{
	int i;

	i = ind + 1;
	num[ind]++;
	while (i < n)
	{
		num[i] = num[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int i;
	int ind;
	int num[n];

	i = 0;
	criamenor(n, num);
	while (indice(num, n) != -1)
	{
		ind = indice(num, n);
		mostra(num, n);
		somanum(ind, num, n);
		write(1, ",", 1);
		write(1, " ", 1);
	}
	mostra(num, n);
}

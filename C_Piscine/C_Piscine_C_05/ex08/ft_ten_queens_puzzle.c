/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanz-sz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:41:13 by gsanz-sz          #+#    #+#             */
/*   Updated: 2019/12/05 15:04:43 by gsanz-sz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	show_cols(int q[10])
{
	int i;
	int print;

	i = 0;
	while (i < 10)
	{
		print = q[i] + 48;
		write(1, &print, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		is_safe(int row, int col, int q[10])
{
	int i;

	i = 0;
	while (i < col)
	{
		if (q[i] == row)
			return (0);
		i++;
	}
	i = 0;
	while (i < col)
	{
		if (i - q[i] == col - row || i + q[i] == col + row)
			return (0);
		i++;
	}
	return (1);
}

void	tenqueen(int col, int *cont, int queen[4])
{
	int row;

	row = 0;
	while (row < 10)
	{
		if (is_safe(row, col, queen))
		{
			queen[col] = row;
			if (col == 9)
			{
				show_cols(queen);
				*cont += 1;
			}
			else
				tenqueen(col + 1, cont, queen);
		}
		row++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int i;
	int *cont;
	int queen[10];

	i = 0;
	cont = &i;
	tenqueen(0, cont, queen);
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:17:26 by aautin            #+#    #+#             */
/*   Updated: 2023/07/12 14:15:24 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_area(int area[])
{
	int		i;
	char	letter;

	i = 0;
	while (i < 10)
	{
		letter = area[i] + '0';
		write(1, &letter, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_safeplace(int area[], int col)
{
	int	col2;

	col2 = 0;
	while (col2 < col)
	{
		if (area[col] == area[col2])
			return (0);
		if (area[col] - col == area[col2] - col2)
			return (0);
		if (area[col] + col == area[col2] + col2)
			return (0);
		col2++;
	}
	return (1);
}

int	ft_solver(int (*area)[], int row, int col)
{
	int	solutions;

	solutions = 0;
	while (row < 10)
	{
		(*area)[col] = row;
		if (ft_safeplace((*area), col))
		{
			if (col == 9)
			{
				ft_write_area(*area);
				return (1);
			}
			else
				solutions += ft_solver(&(*area), 0, col + 1);
		}
		row++;
	}
	return (solutions);
}

int	ft_ten_queens_puzzle(void)
{
	int	area[10];

	return (ft_solver(&area, 0, 0));
}

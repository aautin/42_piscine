/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:55:04 by aautin            #+#    #+#             */
/*   Updated: 2023/06/28 22:53:39 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int a, int b)
{
	int		a1;
	int		a2;
	int		b1;
	int		b2;
	char	space_virgule[2];

	space_virgule[0] = ',';
	space_virgule[1] = ' ';
	a1 = (a / 10) + 48;
	a2 = (a % 10) + 48;
	b1 = (b / 10) + 48;
	b2 = (b % 10) + 48;
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, &space_virgule[1], 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (a1 != 57 || a2 != 56 || b1 != 57 || b2 != 57)
	{
		write(1, &space_virgule[0], 1);
		write(1, &space_virgule[1], 1);
	}
}

void	ft_print_comb2(void)
{	
	int	a;
	int	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			print_numbers(a, b);
			b++;
		}
		a++;
	}
}

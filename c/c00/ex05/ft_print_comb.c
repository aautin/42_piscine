/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:35:50 by aautin            #+#    #+#             */
/*   Updated: 2023/06/28 21:15:26 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int a2, int b2, int c2)
{
	write(1, &a2, 1);
	write(1, &b2, 1);
	write(1, &c2, 1);
	if (a2 != 55 || b2 != 56 || c2 != 57)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			c = b + 1;
			while (c < 58)
			{
				ft_print_numbers(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

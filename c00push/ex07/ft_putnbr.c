/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:56:16 by aautin            #+#    #+#             */
/*   Updated: 2023/06/29 15:56:44 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb != -2147483648)
	{
		if (nb >= 0 && nb <= 9)
		{
			ft_putchar(nb + '0');
		}
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(nb * -1);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	else
		write(1, "-2147483648", 11);
}

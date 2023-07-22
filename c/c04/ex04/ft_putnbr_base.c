/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:14:31 by aautin            #+#    #+#             */
/*   Updated: 2023/07/12 14:54:28 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nbr, char *base)
{
	char	letter;

	letter = base[nbr];
	write(1, &letter, 1);
}

int	ft_base_format(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i > 1)
		return (i);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_base_format(base);
	if (base_len)
	{
		if (0 <= nbr && nbr < base_len)
			ft_putchar(nbr, base);
		else if (nbr < 0)
		{
			write(1, "-", 1);
			if (nbr <= -base_len)
				ft_putnbr_base(-(nbr / base_len), base);
			ft_putnbr_base(-(nbr % base_len), base);
		}
		else
		{
			ft_putnbr_base(nbr / base_len, base);
			ft_putnbr_base(nbr % base_len, base);
		}
	}
}

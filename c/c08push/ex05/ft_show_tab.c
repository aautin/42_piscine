/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:01:35 by aautin            #+#    #+#             */
/*   Updated: 2023/07/20 15:00:30 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	us_nu;
	char			c;

	if (nb < 0)
	{
		write(1, "-", 1);
		us_nu = (unsigned int)nb * (-1);
	}
	else
		us_nu = (unsigned int)nb;
	if (us_nu < 10)
	{
		c = us_nu + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(us_nu / 10);
		ft_putnbr(us_nu % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

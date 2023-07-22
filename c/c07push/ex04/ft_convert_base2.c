/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:13:10 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/17 10:13:17 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_format(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' '
			|| (9 <= str[i] && str[i] <= 13))
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

int	ft_len_rebased(int nbr, char *base_to)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while (nbr)
	{
		nbr = nbr / ft_base_format(base_to);
		i++;
	}
	return (i + 1);
}

void	ft_strcat(char *dest, char base_element)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	dest[i] = base_element;
	dest[i + 1] = '\0';
}

void	ft_putnbr_base(int nbr, char *base, char *str)
{
	int	base_len;

	base_len = ft_base_format(base);
	if (base_len)
	{
		if (0 <= nbr && nbr < base_len)
		{
			ft_strcat(str, base[nbr]);
		}
		else if (nbr < 0)
		{
			ft_strcat(str, '-');
			if (nbr <= -base_len)
				ft_putnbr_base(-(nbr / base_len), base, str);
			ft_putnbr_base(-(nbr % base_len), base, str);
		}
		else
		{
			ft_putnbr_base(nbr / base_len, base, str);
			ft_putnbr_base(nbr % base_len, base, str);
		}
	}
}

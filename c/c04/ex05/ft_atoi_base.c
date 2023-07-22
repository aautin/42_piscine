/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:09:05 by aautin            #+#    #+#             */
/*   Updated: 2023/07/12 14:44:10 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_format(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (9 <= base[i] && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
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

int	ft_position_in_base(char letter, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == letter)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	dash_nb;
	int	nb;

	if (!ft_base_format(base))
		return (0);
	i = 0;
	dash_nb = 1;
	nb = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			dash_nb = dash_nb * -1;
		i++;
	}
	while (ft_position_in_base(str[i], base) >= 0)
	{
		nb = nb * ft_base_format(base) + ft_position_in_base(str[i], base);
		i++;
	}
	nb = nb * dash_nb;
	return (nb);
}

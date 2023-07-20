/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:28:27 by aautin            #+#    #+#             */
/*   Updated: 2023/07/17 04:29:43 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base, char *str);
void	ft_strcat(char *dest, char src);
int		ft_base_format(char *base);
int		ft_len_rebased(int nbr, char *base_to);

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_unbased;
	int		size;
	char	*final_str;

	if (ft_base_format(base_from) && ft_base_format(base_to))
	{
		nbr_unbased = ft_atoi_base(nbr, base_from);
		size = ft_len_rebased(nbr_unbased, base_to);
		final_str = (char *)malloc(size + 1 * sizeof(char));
		if (final_str == NULL)
			return (NULL);
		ft_putnbr_base(nbr_unbased, base_to, final_str);
		return (final_str);
	}
	else
		return (NULL);
}

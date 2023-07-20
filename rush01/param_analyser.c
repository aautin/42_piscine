/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param_analyser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:35:28 by aautin            #+#    #+#             */
/*   Updated: 2023/07/09 21:42:03 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapers.h"

int	check_string_duo(char *str)
{
	int	i;

	i = 0;
	while (i + 8 < 31)
	{
		if ('5' < str[i] + str[i + 8] - '0' || str[i] + str[i + 8] - '0' < '3')
			return (0);
		if (i == 24)
			return (1);
		if ((i + 2) % 8 == 0)
			i += 10;
		else
			i += 2;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_string(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (i < 30)
	{
		if (str[i] <= '4' && str[i] >= '1')
			if (str[i + 1] != ' ')
				return (0);
		else if (str[i] == ' ')
			if (!(str[i + 1] <= '4' && str[i + 1] >= '1'))
				return (0);
		else
			return (0);
		i++;
	}
	return (1);
}

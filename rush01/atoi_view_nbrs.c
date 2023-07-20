/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_view_nbrs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:28:12 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/09 22:20:09 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapers.h"
#include <stdio.h>

void	str_to_int_array(char *str, int **array)
{
	int	i;
	int	array_nb;

	i = 0;
	array_nb = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			*array[array_nb] = str[i] - '0';
			array_nb++;
		}
		i++;
	}
}

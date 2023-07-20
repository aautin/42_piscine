/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:12:28 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/19 15:32:34 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_area(int **area, t_map map) // to be deleted
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < map.row_nb)
	{
		j = 0;
		while (j < map.col_nb)
		{
			printf("%d,", area[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}

int	**create_empty_array(t_map map)
{
	int	i;
	int	**area;

	area = (int **)malloc(map.row_nb * sizeof(int *));
	if (!area)
		return (NULL);
	i = -1;
	while (++i < map.row_nb)
	{
		area[i] = (int *)malloc(map.col_nb * sizeof(int));
		if (!area[i])
			return (NULL);
	}
	return (area);
}

void	free_area(int **area, t_map map)
{
	int	i;

	i = -1;
	while (++i < map.row_nb)
		free(area[i]);
	free(area);
}

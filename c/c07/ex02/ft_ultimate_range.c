/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:48:13 by aautin            #+#    #+#             */
/*   Updated: 2023/07/17 07:02:26 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

int     *ft_range(int min, int max)
{
        int             *tab;
        long    range;
        long    i;

        range = max - min;
        if (min >= max)
                return (NULL);
        tab = (int *)malloc(sizeof(int) * range);
        if (!tab)
                return (NULL);
        i = 0;
        while (i < range)
        {
                tab[i] = min + i;
                i++;
        }
        return (tab);
}

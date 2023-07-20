/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:03:04 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/16 21:03:16 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
/*
int	*ft_range(int min, int max)
{
	int		*tab;
	long	range;
	long	i;

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

#include <stdio.h>
int main()
{
        int     min = 20;
        int     max = 30;
        int     i = 0;
        int     *tab = ft_range(min, max);
	int	**range;
        range	= &tab;
        if (!tab)
                return 0;
        while (i < (max - min))
        {
                printf("tab[%d] = %d \n",i, tab[i]);
                i++;
        }
	free(tab);
	min = 0;
	max = 10;
	printf("nouveau tableau\n");
        ft_ultimate_range(range, min, max);
        if (!tab)
                return 0;
	i = 0;
        while (i < (max - min))
        {
                printf("tab[%d] = %d \n",i, tab[i]);
                i++;
        }
	int test = ft_ultimate_range(range, min, max);
	printf("%d", test);
        //free(tab);
}*/

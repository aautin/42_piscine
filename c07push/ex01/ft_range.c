/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:06:00 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/15 17:09:37 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	long	i;
	long	range;

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
/*#include <stdio.h>
int main()
{
	int	min = -20;
	int	max = 0;
	int	i = 0;
	int	*tab = ft_range(min, max);
	if (!tab)
		return 0;
	while (i < (max - min))
	{
		printf("tab[%d] = %d \n",i, tab[i]);
		i++;
	}
	free(tab);
}*/

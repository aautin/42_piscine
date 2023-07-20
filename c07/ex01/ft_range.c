/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:40:45 by aautin            #+#    #+#             */
/*   Updated: 2023/07/12 11:43:23 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	if (max - min <= 0)
		return (NULL);
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		ptr[i] = i + min;
		i++;
	}
	return (ptr);
}

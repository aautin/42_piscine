/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:22:42 by aautin            #+#    #+#             */
/*   Updated: 2023/06/29 21:18:07 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

void	ft_rev_int_tab(int *tab, int size)
{
	float	n;
	int		i;
	int		j;

	n = size / 2;
	i = 0;
	j = size - 1;
	while (i < n)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

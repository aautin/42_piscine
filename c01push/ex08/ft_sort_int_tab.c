/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:59:52 by aautin            #+#    #+#             */
/*   Updated: 2023/07/01 16:47:29 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	nb_swap;

	nb_swap = 1;
	while (nb_swap != 0)
	{
		nb_swap = 0;
		index = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				ft_swap(&tab[index], &tab[index + 1]);
				nb_swap++;
			}
			index++;
		}
	}
}

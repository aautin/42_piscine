/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:05:54 by aautin            #+#    #+#             */
/*   Updated: 2023/07/10 11:21:16 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	final_nb;

	if (power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	i = 1;
	final_nb = nb;
	while (i < power)
	{
		final_nb *= nb;
		i++;
	}
	return (final_nb);
}

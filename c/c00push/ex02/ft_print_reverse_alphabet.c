/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:19:13 by aautin            #+#    #+#             */
/*   Updated: 2023/06/28 21:13:08 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	num_alphabet;

	num_alphabet = 122;
	while (num_alphabet > 96)
	{
		write(1, &num_alphabet, 1);
		num_alphabet--;
	}
}

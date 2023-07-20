/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:14:14 by aautin            #+#    #+#             */
/*   Updated: 2023/06/28 21:12:45 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	num_alphabet;

	num_alphabet = 97;
	while (num_alphabet < 123)
	{
		write(1, &num_alphabet, 1);
		num_alphabet++;
	}
}

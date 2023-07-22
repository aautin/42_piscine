/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:57:37 by aautin            #+#    #+#             */
/*   Updated: 2023/07/04 20:27:42 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		index;
	int		rest;
	char	*base_hex;

	base_hex = "0123456789abcdef";
	index = 0;
	while (str[index])
	{
		if (!(str[index] > 31 && str[index] < 127))
		{
			rest = 92;
			write(1, &rest, 1);
			rest = (unsigned char) str[index] / 16;
			write(1, &base_hex[rest], 1);
			rest = (unsigned char) str[index];
			write(1, &base_hex[rest % 16], 1);
		}
		else
			write(1, &str[index], 1);
		index++;
	}	
}

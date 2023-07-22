/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:44:13 by aautin            #+#    #+#             */
/*   Updated: 2023/06/30 23:06:42 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice])
	{
		if (32 > str[indice] || str[indice] > 126)
			return (0);
		indice++;
	}
	return (1);
}

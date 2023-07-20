/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:26:06 by aautin            #+#    #+#             */
/*   Updated: 2023/06/30 13:42:59 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice])
	{
		if ('0' > str[indice] || str[indice] > '9')
			return (0);
		indice++;
	}
	return (1);
}

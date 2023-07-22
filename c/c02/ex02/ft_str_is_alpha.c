/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:07:38 by aautin            #+#    #+#             */
/*   Updated: 2023/07/02 13:37:55 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice])
	{
		if ('A' > str[indice]
			|| (('Z' < str[indice]) && (str[indice] < 'a'))
			|| str[indice] > 'z')
			return (0);
		indice++;
	}
	return (1);
}

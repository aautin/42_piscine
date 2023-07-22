/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:44:13 by aautin            #+#    #+#             */
/*   Updated: 2023/06/30 13:49:59 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice])
	{
		if ('A' > str[indice] || str[indice] > 'Z')
			return (0);
		indice++;
	}
	return (1);
}

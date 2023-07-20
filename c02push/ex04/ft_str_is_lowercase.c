/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:44:13 by aautin            #+#    #+#             */
/*   Updated: 2023/06/30 13:47:40 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice])
	{
		if ('a' > str[indice] || str[indice] > 'z')
			return (0);
		indice++;
	}
	return (1);
}

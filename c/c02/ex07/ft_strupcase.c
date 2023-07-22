/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:44:13 by aautin            #+#    #+#             */
/*   Updated: 2023/07/02 12:06:33 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice])
	{
		if ('a' <= str[indice] && str[indice] <= 'z')
			str[indice] -= 32;
		indice++;
	}
	return (str);
}

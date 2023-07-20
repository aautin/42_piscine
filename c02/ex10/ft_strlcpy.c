/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:54:54 by aautin            #+#    #+#             */
/*   Updated: 2023/07/03 16:33:30 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	indice;

	indice = 0;
	if (size > 0)
	{	
		while (src[indice] && indice < size - 1)
		{
			dest[indice] = src[indice];
			indice++;
		}
		dest[indice] = '\0';
	}
	indice = 0;
	while (src[indice])
		indice++;
	return (indice);
}

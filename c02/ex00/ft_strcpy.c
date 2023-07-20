/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 09:24:07 by aautin            #+#    #+#             */
/*   Updated: 2023/06/30 23:14:18 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	indice;

	indice = 0;
	while (src[indice])
	{
		dest[indice] = src[indice];
		indice++;
	}
	dest[indice] = '\0';
	return (dest);
}

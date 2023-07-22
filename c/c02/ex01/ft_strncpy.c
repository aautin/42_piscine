/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:01:48 by aautin            #+#    #+#             */
/*   Updated: 2023/07/02 20:31:33 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	indice;

	indice = 0;
	while (indice < n && src[indice])
	{
		dest[indice] = src[indice];
		indice++;
	}
	while (indice < n)
	{
		dest[indice] = '\0';
		indice++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:43:36 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/06 18:20:05 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i ++;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j ++;
	}
	dest[i + j] = '\0';
	return (dest);
}

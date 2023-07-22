/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:44:13 by aautin            #+#    #+#             */
/*   Updated: 2023/07/01 00:04:32 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice])
	{
		if ('A' <= str[indice] && str[indice] <= 'Z')
			str[indice] += 32;
		indice++;
	}
	return (str);
}

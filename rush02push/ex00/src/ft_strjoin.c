/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:33:18 by emfourni          #+#    #+#             */
/*   Updated: 2023/07/15 15:19:06 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	l(char **strs)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

void	ft_join(char *str, char **strs, char *sep, int size)
{
	int		i;
	int		j;
	int		words;
	char	*sep2;

	i = 0;
	words = -1;
	while (strs[++words])
	{
		j = 0;
		sep2 = sep;
		while (strs[words][j])
			str[i++] = strs[words][j++];
		while (words + 1 < size && *sep2 != '\0')
		{
			str[i++] = *sep2;
			sep2++;
		}
	}
	str[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * l(strs) + (ft_len(sep) * size + 1));
	ft_join(str, strs, sep, size);
	return (str);
}

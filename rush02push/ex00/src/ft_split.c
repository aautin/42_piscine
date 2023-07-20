/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:11:56 by emfourni          #+#    #+#             */
/*   Updated: 2023/07/15 15:17:50 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_doublon(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c || c == '\0')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_allocate(char *str2, char *charset)
{
	int	i;
	int	wordcount;

	i = -1;
	wordcount = 0;
	while (str2[++i])
	{
		if (!ft_doublon(str2[i], charset) && (i == 0 || ft_doublon(str2[i - 1],
					charset)))
			wordcount++;
		else if (ft_doublon(str2[i], charset))
			str2[i] = '\0';
	}
	return (wordcount);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	int		word_index;
	char	*str2;
	char	**split;

	count = 0;
	word_index = 0;
	str2 = ft_strdup(str);
	i = ft_allocate(str2, charset);
	split = (char **)malloc(sizeof(char *) * (i + 1));
	if (!split)
		return (NULL);
	split[i] = NULL;
	i = -1;
	while (++i <= ft_strlen(str))
	{
		if (((str2[i] == '\0' && i != 0) || i == ft_strlen(str)) && i != 0
			&& str2[i - 1] != '\0')
			split[count++] = ft_strdup(&str2[word_index]);
		else if (str2[i] != '\0' && (i == 0 || str2[i - 1] == '\0'))
			word_index = i;
	}
	return (split);
}

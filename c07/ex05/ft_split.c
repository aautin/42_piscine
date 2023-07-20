/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:51:13 by aautin            #+#    #+#             */
/*   Updated: 2023/07/17 05:20:08 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char letter, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (letter == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	ft_cnt_wrds(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!ft_is_charset(str[i], charset))
		{
			count++;
			while (str[i] && !ft_is_charset(str[i], charset))
				i++;
		}
		while (ft_is_charset(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset, int *pos)
{
	int		pos2;
	int		i;
	char	*ptr_dup;

	while (ft_is_charset(str[(*pos)], charset))
		(*pos)++;
	pos2 = *pos;
	while (str[*pos] && !ft_is_charset(str[(*pos)], charset))
		(*pos)++;
	ptr_dup = (char *)malloc((*pos - pos2 + 1) * sizeof(char));
	if (ptr_dup == NULL)
		return (NULL);
	ptr_dup[*pos - pos2] = '\0';
	i = 0;
	while (pos2 + i < *pos)
	{
		ptr_dup[i] = str[pos2 + i];
		i++;
	}
	return (ptr_dup);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		pos;

	tab = (char **)malloc((ft_cnt_wrds(str, charset) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	tab[ft_cnt_wrds(str, charset)] = "0";
	i = 0;
	pos = 0;
	while (i < ft_cnt_wrds(str, charset))
	{
		tab[i] = ft_strdup(str, charset, &pos);
		i++;
	}
	return (tab);
}

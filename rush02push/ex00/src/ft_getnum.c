/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:41:26 by emfourni          #+#    #+#             */
/*   Updated: 2023/07/16 18:28:57 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_custom_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = -1;
	while (src[++len] != '\0')
		;
	if ((len + 1) < size)
	{
		len = -1;
		while (++len <= size && src[len] != '\0')
			dest[len] = src[len];
	}
	else if (size != 0)
	{
		len = -1;
		while (++len < size && src[len] != '\0')
			dest[len] = src[len];
		dest[size - 1] = '\0';
	}
	return (len);
}

char	*ft_reverse_str(char *str, int len)
{
	int		i;
	char	c;

	i = -1;
	while (++i <= (len - 1) / 2)
	{
		c = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = c;
	}
	return (str);
}

char	**ft_create_tab_numbers(char *str)
{
	int		len;
	int		last;
	int		slices;
	char	**tab;

	len = ft_strlen(str);
	last = len % 3;
	slices = len / 3;
	if (last > 0)
		slices++;
	tab = (char **)malloc(sizeof(char *) * (slices + 1));
	if (!tab)
		return (NULL);
	tab[slices] = 0;
	str = ft_reverse_str(str, len);
	if (ft_number_tab(tab, str, len) == 1)
		return (NULL);
	slices = -1;
	return (tab);
}

int	ft_number_tab(char **tab, char *str, int len)
{
	int	slices;
	int	i;
	int	size;

	i = -1;
	slices = -1;
	while (str[++i] != '\0')
	{
		size = 3;
		if (i % 3 == 0)
		{
			if (++slices == (len - 1) && (len % 3) > 0)
				size = len % 3;
			tab[slices] = (char *)malloc(sizeof(char) * (size + 1));
			if (!tab[slices])
			{
				while (--slices > -1)
					free(tab[slices]);
				return (1);
			}
			ft_custom_strlcpy(tab[slices], (str + i), (4));
		}
	}
	return (0);
}

char	*ft_gethundred(int i, char **dict, int zeros)
{
	int	j;
	int	k;
	int	c;

	j = 0;
	i = i * 3;
	while (dict[j])
	{
		c = 0;
		k = 0;
		while (dict[j][k] != ':')
		{
			if (dict[j][k] == '0')
				c++;
			k++;
		}
		if (c == i && i != 0)
			return (ft_getstr(dict[j]));
		else if (c == zeros && c != 0)
			return (ft_getstr(dict[j]));
		j++;
	}
	return (NULL);
}

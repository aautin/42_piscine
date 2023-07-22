/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnum2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:26:57 by emfourni          #+#    #+#             */
/*   Updated: 2023/07/16 19:50:13 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_getstr(char *str)
{
	char	*r;
	int		i;
	int		j;
	int		t;

	i = 0;
	j = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ')
		i++;
	t = i;
	while (str[i] != '\0')
	{
		i++;
		j++;
	}
	r = malloc(sizeof(char) * (j + 1));
	if (!r)
		return (NULL);
	j = 0;
	while (str[t] != '\0')
		r[j++] = str[t++];
	r[j] = '\0';
	return (r);
}

char	*ft_getunit(char a, char **dict)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (a == dict[i][0] && (dict[i][1] > '9' || dict[i][1] < '0'))
		{
			return (ft_getstr(dict[i]));
		}
		i++;
	}
	return (NULL);
}

char	*ft_getteen(char *a, char **dict)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (ft_strlen(a) == 3)
		{
			if (dict[i][0] == a[1] && dict[i][1] == a[0])
				return (ft_getstr(dict[i]));
		}
		else
		{
			if (dict[i][1] == a[0] && dict[i][0] == a[1])
				return (ft_getstr(dict[i]));
		}
		i++;
	}
	return (NULL);
}

char	*ft_getdozen(char a, char **dict)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (a == dict[i][0] && dict[i][1] == '0' && (dict[i][2] > '9'
				|| dict[i][2] < '0'))
		{
			return (ft_getstr(dict[i]));
		}
		i++;
	}
	return (NULL);
}

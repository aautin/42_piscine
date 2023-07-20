/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:48:46 by aautin            #+#    #+#             */
/*   Updated: 2023/07/02 12:06:55 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str2)
{
	int	i;

	i = 0;
	while (str2[i])
	{
		if ('A' <= str2[i] && str2[i] <= 'Z')
			str2[i] += 32;
		i++;
	}
	return (str2);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i + 1])
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			if (!(str[i] >= 'a' && str[i] <= 'z')
				&& !(str[i] >= 'A' && str[i] <= 'Z')
				&& !(str[i] >= '0'
					&& str[i] <= '9'))
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

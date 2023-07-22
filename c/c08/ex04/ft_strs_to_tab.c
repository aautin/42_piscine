/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:22:40 by aautin            #+#    #+#             */
/*   Updated: 2023/07/20 13:09:51 by aautin           ###   ########.fr       */
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

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *str)
{
	char	*ptr;

	ptr = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, str);
	return (ptr);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*array;
	int	i;
	array = (struct s_stock_str *)malloc(ac * sizeof(struct s_stock_str));
	array[ac - 1] = "0";

	i = 1;
	while (i < ac)
	{
		array[i - 1].size = ft_strlen(av[i]); 
		array[i - 1].str = (char *)malloc((ft_strlen(av[i]) + 1) * sizeof(char));
		array[i - 1].str = av[i];
		array[i - 1].copy = ft_strdup(size, av[i]); 
		i++;
	}
	return (array);
}

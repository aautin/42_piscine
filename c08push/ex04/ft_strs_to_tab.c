/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:51:30 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/20 15:28:24 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return ("");
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*array;

	array = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!array)
		return (0);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].size = 0;
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}

/* #include <stdio.h>
int	main(int argc, char **argv)
{
	int			index;
	t_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
	index = 0;
	while (index < argc)
	{
		free(structs[index].copy);
		index++;
	}
	free(structs);
} */
/* 
int	main(int argc, char **argv)
{
	int			index;
	t_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	ft_show_tab(structs);
	while (index < argc)
	{
		free(structs[index].copy);
		index++;
	}
	free(structs);
}
 */
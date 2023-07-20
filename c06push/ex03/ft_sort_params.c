/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:01:42 by aautin            #+#    #+#             */
/*   Updated: 2023/07/09 14:05:28 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_delete_str(int argc, char *argv[], int j)
{
	int	i;

	i = j;
	while (i < argc - 1)
	{
		argv[i] = argv[i + 1];
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_sort(int argc, char *argv[])
{
	int	i;
	int	j;

	while (argc - 1)
	{
		i = 1;
		j = 1;
		while (i < argc)
		{
			if (ft_strcmp(argv[j], argv[i]) > 0)
				j = i;
			i++;
		}
		ft_write_str(argv[j]);
		ft_delete_str(argc, argv, j);
		argc--;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		ft_sort(argc, argv);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:40:53 by aautin            #+#    #+#             */
/*   Updated: 2023/07/19 15:21:03 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	main(int ac, char *av[])
{
	int		i;
	t_file	file;
	t_map	str;

	i = 0;
	while (++i < ac)
	{
		file.size = fl_size(av[i]);
		if (file.size == -1)
		{
			write_management_errors(-1, av[i]);
			return (1);
		}
		if (!fl_to_str(&file, av[i]))
		{
			write_management_errors(-1, av[i]);
			return (1);
		}
		else if (!is_str_formated(file, &str))
			write_management_errors(0, av[i]);
		printf("%s\n", file.content);
		printf("array's size: %d\n", file.size);
		
		


		free(file.content);
	}
	return (0);
}
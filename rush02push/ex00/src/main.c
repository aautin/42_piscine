/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:29:49 by ylin              #+#    #+#             */
/*   Updated: 2023/07/16 00:45:19 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(char *str);

char	*file_to_str(char *filename);

int	main(int ac, char **av)
{
	int		nb;
	char	*dict;

	if (ac == 2)
	{
		dict = file_to_str("numbers.dict");
		if (dict == NULL)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		nb = ft_atoi(av[1]);
	}
	else if (ac == 3)
	{
		dict = av[1];
		nb = ft_atoi(av[2]);
	}
	else
	{
		(void)nb;
		write(1, "Error\n", 6);
	}
}

// free();
// return(0);

/*
dest = (int **)malloc(sizeof(int)* f)
if (!split)
	return (NULL);
*/

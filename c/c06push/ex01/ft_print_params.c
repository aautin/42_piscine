/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:46:06 by aautin            #+#    #+#             */
/*   Updated: 2023/07/06 18:57:56 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	arg_nb;
	int	i;

	arg_nb = 1;
	while (arg_nb < argc)
	{
		i = 0;
		while (argv[arg_nb][i])
			i++;
		write(1, argv[arg_nb], i);
		write(1, "\n", 1);
		arg_nb++;
	}
}

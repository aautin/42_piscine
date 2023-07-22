/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:58:33 by aautin            #+#    #+#             */
/*   Updated: 2023/07/06 18:59:25 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	arg_nb;
	int	i;

	arg_nb = argc - 1;
	while (arg_nb > 0)
	{
		i = 0;
		while (argv[arg_nb][i])
			i++;
		write(1, argv[arg_nb], i);
		write(1, "\n", 1);
		arg_nb--;
	}
}

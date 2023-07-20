/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:29:31 by aautin            #+#    #+#             */
/*   Updated: 2023/07/09 13:55:55 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	name_len;

	name_len = 0;
	if (argc)
	{
		while (argv[0][name_len])
			name_len++;
		write(1, argv[0], name_len);
		write(1, "\n", 1);
	}
}

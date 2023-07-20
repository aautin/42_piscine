/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:37:37 by ylin              #+#    #+#             */
/*   Updated: 2023/07/16 00:47:49 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*file_to_str(char *filename)
{
	int		file_descriptor;
	char	*file_content;
	ssize_t	size;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (NULL);
	size = 0;
	file_content = (char *)malloc(200000 * sizeof(char));
	while (read(file_descriptor, file_content, size) != 20)
	{
		printf("%ld\n", read(file_descriptor, &file_content, size));
		size++;
	}
	file_content = (char *)malloc(size * sizeof(char));
	read(file_descriptor, file_content, size);
	file_content[size] = '\0';
	close(file_descriptor);
	return (file_content);
}

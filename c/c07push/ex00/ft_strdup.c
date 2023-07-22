/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:29:17 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/13 15:58:41 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*duplicated;

	i = 0;
	while (src[i])
		i++;
	duplicated = (char *)malloc(sizeof(char) * i + 1);
	if (duplicated == 0)
		return (NULL);
	i = 0;
	while (src[i])
	{
		duplicated[i] = src[i];
		i++;
	}
	duplicated[i] = '\0';
	return (duplicated);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "";
	char *src2 = ft_strdup(src);
	printf("%s\n", src2);
	free(src2);
}*/	

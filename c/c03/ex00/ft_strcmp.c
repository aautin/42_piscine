/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:26:21 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/02 15:26:25 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i ++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char s1[] = "Test1";
// 	char s2[] = "OK";
// 	char s3[] = "Same";
// 	char s4[] = "Size";
// 	char s5[] = "Shorter";
// 	char s6[] = "ThanMyself";
// 	char s7[] = "ABC";
// 	char s8[] = "ABZ";
// 	char s9[] = "AB";
// 	char s10[] = "ABCD";
// 	char s11[] = "";

// 	printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
// 	printf("%d, %d\n", ft_strcmp(s3, s4), strcmp(s3, s4));
// 	printf("%d, %d\n", ft_strcmp(s5, s6), strcmp(s5, s6));
// 	printf("%d, %d\n", ft_strcmp(s5, s5), strcmp(s5, s5));
// 	printf("%d, %d\n", ft_strcmp(s7, s8), strcmp(s7, s8));
// 	printf("%d, %d\n", ft_strcmp(s8, s9), strcmp(s8, s9));
// 	printf("%d, %d\n", ft_strcmp(s9, s10), strcmp(s9, s10));
// 	printf("%d, %d\n", ft_strcmp(s11, s11), strcmp(s11, s11));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:07:02 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/07 11:54:39 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
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
// 	char s7[] = "ShorterTest";
// 	char s8[] = "ABZ";
// 	char s9[] = "AB";
// 	char s10[] = "ABCD";
// 	char s11[] = "ABC";
// 	char s12[] = "";

// 	printf("1.%d, %d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
// 	printf("2.%d, %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
// 	printf("3.%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
// 	printf("4.%d, %d\n", ft_strncmp(s3, s4, 1), strncmp(s3, s4, 1));
// 	printf("5.%d, %d\n", ft_strncmp(s5, s6, 3), strncmp(s5, s6, 3));
// 	printf("6.%d, %d\n", ft_strncmp(s5, s5, 10), strncmp(s5, s5, 10));
// 	printf("7.%d, %d\n", ft_strncmp(s5, s5, 5), strncmp(s5, s5, 5));
// 	printf("8.%d, %d\n", ft_strncmp(s5, s7, 7), strncmp(s5, s7, 7));
// 	printf("9.%d, %d\n", ft_strncmp(s5, s7, 8), strncmp(s5, s7, 8));
// 	printf("10.%d, %d\n", ft_strncmp(s9, s8, 3), strncmp(s9, s8, 3));
// 	printf("11.%d, %d\n", ft_strncmp(s9, s8, 2), strncmp(s9, s8, 2));
// 	printf("12.%d, %d\n", ft_strncmp(s9, s10, 4), strncmp(s9, s10, 4));
// 	printf("13.%d, %d\n", ft_strncmp(s11, s12, 2), strncmp(s11, s12, 2));
// }

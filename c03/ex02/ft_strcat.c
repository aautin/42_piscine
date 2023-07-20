/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:26:51 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/02 19:26:53 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++ ;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i ++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// char	*ft_strcat(char *dest, char *src);
// int	main(void)
// {
// 	char s1a[10] = "Test1";
// 	char s2a[] = "OK";
// 	char s1b[10] = "Test1";
// 	char s2b[] = "OK";
// 	char s3a[10] = "Same";
// 	char s4a[] = "Size";
// 	char s3b[10] = "Same";
// 	char s4b[] = "Size";
// 	char s5a[20] = "Shorter";
// 	char s6a[] = "ThanMyself";
// 	char s5b[20] = "Shorter";
// 	char s6b[] = "ThanMyself";
// 	printf("%s:%s\n", ft_strcat(s1a, s2a), strcat(s1b, s2b));
// 	printf("%s:%s\n", ft_strcat(s3a, s4a), strcat(s3b, s4b));
// 	printf("%s:%s\n", ft_strcat(s5a, s6a), strcat(s5b, s6b));
// }
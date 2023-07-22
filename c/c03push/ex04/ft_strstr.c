/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 08:47:23 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/09 12:47:27 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_to_find(char *str, int j, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (!str[i + j])
			return (-1);
		if (to_find[i] != str[i + j])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	flag;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		flag = ft_check_to_find(str, i, to_find);
		if (flag == -1)
			return (0);
		if (flag)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    texte1[] = "\x23\x34\x45\xff";
        char    texte2[] = "\x34\x45";
        char    texte3[] = "\0";
        char    texte4[] = "";
        char    texte5[] = "0123456789";
        char    texte6[] = "354";
        char    texte7[] = "abcde";
        char    texte8[] = "abcdef";
        char    texte9[] = "0123456";
        char    texte10[] = "";

        printf("%s", ft_strstr(texte1, texte2));
        printf(":");
        printf("%s", strstr(texte1, texte2));
        printf("\n");
        printf("%s", ft_strstr(texte3, texte4));
        printf(":");
        printf("%s", strstr(texte3, texte4));
        printf("\n");
        printf("%s", ft_strstr(texte5, texte6));
        printf(":");
        printf("%s", strstr(texte5, texte6));
        printf("\n");
        printf("%s", ft_strstr(texte7, texte8));
        printf(":");
        printf("%s", strstr(texte7, texte8));
        printf("\n");
        printf("%s", ft_strstr(texte9, texte10));
        printf(":");
        printf("%s", strstr(texte9, texte10));
        printf("\n");
}
*/

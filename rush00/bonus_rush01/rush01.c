/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:12:20 by aautin            #+#    #+#             */
/*   Updated: 2023/07/01 16:05:10 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	print_row(int x, char left, char center, char right)
{
	int	index;

	index = 0;
	ft_putchar(left);
	while (index < x - 2)
	{
		ft_putchar(center);
		index++;
	}
	if (x != 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{	
	int	index;

	index = 0;
	if (x < 1 || y < 1)
		return ;
	print_row(x, '/', '*', '\\');
	while (index < y - 2)
	{
		print_row(x, '*', ' ', '*');
		index++;
	}	
	if (y != 1)
		print_row(x, '\\', '*', '/');
}

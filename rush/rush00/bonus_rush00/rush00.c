/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:12:20 by aautin            #+#    #+#             */
/*   Updated: 2023/07/01 15:55:56 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	print_row(int x, char left_right, char center)
{
	int	index;

	index = 0;
	ft_putchar(left_right);
	while (index < x - 2)
	{
		ft_putchar(center);
		index++;
	}
	if (x != 1)
		ft_putchar(left_right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{	
	int	index;

	index = 0;
	if (x < 1 || y < 1)
		return ;
	print_row(x, 'o', '-');
	while (index < y - 2)
	{
		print_row(x, '|', ' ');
		index++;
	}	
	if (y != 1)
		print_row(x, 'o', '-');
}

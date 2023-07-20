/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:11:38 by aautin            #+#    #+#             */
/*   Updated: 2023/07/09 21:46:49 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPERS_H
# define SKYSCRAPERS_H

# include <unistd.h>
# include <stdlib.h>

int	is_valid_row_col(int ***grid, int r, int c, int nb);

int	view_count_row(int ***grid, int r, int c, int view_point);
int	view_count_col(int ***grid, int r, int c, int view_point);

int	is_valid_row_view(int ***grid, int r, int c, int view[16]);
int	is_valid_col_view(int ***grid, int r, int c, int view[16]);

int	solve(int ***grid, int r, int c, int view[16]);

int	check_string_duo(char *str);
int	ft_strlen(char *str);
int	check_string(char *str);

#endif

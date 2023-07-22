/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsiao <yhsiao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:23:44 by yhsiao            #+#    #+#             */
/*   Updated: 2023/07/19 14:03:37 by yhsiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> // to be deleted

typedef struct s_map
{
	int		col_nb;
	int		row_nb;
	char	empty_c;
	char	obstacle_c;
	char	full_c;
	int		bsq_col;
	int		bsq_row;
	int		bsq_size;
}	t_map;

char	**ft_split(char *str, char *charset);

void	print_area(int **area, t_map map); // to be deleted
int		**create_empty_array(t_map map);
void	free_area(int **area, t_map map);

int		**create_sol_area(t_map map);
int		sq_calc(int **area, int **sol_area, int i, int j);
int		**find_bsq(int **area, t_map *map);

int		**str_to_map(char	*str, t_map map);
void	print_bsq_map(int **area, t_map map);
void	bsq_solver(char *str, t_map map);

#endif
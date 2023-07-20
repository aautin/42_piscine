/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:40:53 by aautin            #+#    #+#             */
/*   Updated: 2023/07/19 15:28:17 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_file
{
	int		size;
	int		descriptor;
	char	*content;
}			t_file;

typedef struct s_map
{
	int		size; 	// char nb in str
	int		row_nb;	// not index
	int		col_nb;	// not index
	char 	empty_c;
	char 	obstacle_c;
	char	full_c;
	int		bsq_row; // index in the dbl array
	int		bsq_col; // index in the dbl array
	int		bsq_size;// size of the biggest square
}			t_map;


// fl_analyses
int			fl_size(char *fl_name);
int			fl_to_str(t_file *file, char *fl_name);

// main
int			main(int ac, char *av[]);

// write
void		write_management_errors(int option, char *av);

// str_analyses
int			is_str_formated(t_file	file, t_map *str);
int			is_empty_or_obs(t_file file, t_map *str, int i);

// atoi
int			ft_atoi(char *str, int max);

#endif
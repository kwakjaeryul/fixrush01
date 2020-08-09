/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakwak <jrtoday@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 22:24:50 by jakwak            #+#    #+#             */
/*   Updated: 2020/08/09 22:24:55 by jakwak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h>

void	assign_memory(int **map, int **array_l_r, int **array_u_d);
void	free_memory(int **map, int **array_l_r, int **array_u_d);
int		check_argument(int argc, char *argv[]);
void	put_into_arrays(char *argv[], int **array_l_r, int **array_u_d);
void	init_map_to_zero(int **map);
void	print_map(int **map);
int		solve_with_dfs(int **map, int **array_l_r, int **array_u_d);

#endif

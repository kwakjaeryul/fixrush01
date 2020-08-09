/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakwak <jrtoday@naver.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 22:25:19 by jakwak            #+#    #+#             */
/*   Updated: 2020/08/09 22:25:22 by jakwak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H

int		check_duplicated_row_col(int **map, int row, int col);
int		check_row(int **map, int row, int **array_l_r);
int		check_col(int **map, int col, int **array_u_d);

#endif
